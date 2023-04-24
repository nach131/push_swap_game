const fs = require('fs');
const json2md = require('json2md');

const scores = fs.readFileSync('./scores.json', 'utf8');
const json = JSON.parse(scores);

const tabla = json2md([
	{
		table: {
			headers: ['user', 'score', 'campus'],
			rows: json.map(obj => [obj.user, obj.score, obj.campus])
		}
	}
]);

console.log(tabla);
