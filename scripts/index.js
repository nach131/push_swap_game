const fs = require('fs').promises
const fscore = require('fs');

const json2md = require('json2md');

const scores = fscore.readFileSync('./data/scores.json', 'utf8');
const json = JSON.parse(scores);

const tabla = json2md([
	{
		table: {
			headers: ['user', 'score', 'campus'],
			rows: json.map(obj => [obj.user, obj.score, obj.campus])
		}
	}
]);

(async () => {

	const MarkdownTemplate = await fs.readFile('./README.md.tpl', { encoding: 'utf-8' })
	const newMarkdown = MarkdownTemplate
		.replace('best_scores', tabla)

	// console.log(newMarkdown);
	await fs.writeFile('./README.md', newMarkdown)
})();


