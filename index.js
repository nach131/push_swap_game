const fs = require('fs').promises
const fscore = require('fs');

const axios = require('axios');
const json2md = require('json2md');

require('dotenv').config()

const scores = fscore.readFileSync('./scores.json', 'utf8');
const json = JSON.parse(scores);

const tabla = json2md([
	{
		table: {
			headers: ['user', 'score', 'campus'],
			rows: json.map(obj => [obj.user, obj.score, obj.campus])
		}
	}
]);


async function getData(url){

	var config = {
		method: 'get',
		url: url,
		headers: { 
			'Authorization': process.env.SECRET_KEY
		}
	};
	const res = await axios(config)
  // console.log('after the call to service');
	// console.log(res.data.count)
  return (res.data.count);
}

(async()=>{
	const views = await getData('https://api.github.com/repos/nach131/push_swap_game/traffic/views');
	const clone = await getData('https://api.github.com/repos/nach131/push_swap_game/traffic/clones');
	const MarkdownTemplate = await fs.readFile('./README.md.tpl', { encoding: 'utf-8' })

	// console.log(views, clone)

	const newMarkdown = MarkdownTemplate
	.replace('total_views', views)
	.replace('total_clone', clone)
		.replace('best_scores', tabla)

	console.log(newMarkdown);
	await fs.writeFile('./README.md', newMarkdown)
})();


