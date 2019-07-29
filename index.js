const addon = require('./build/Release/addon');

function jsSum() {
	let a = 3.1415926, b = 2.718;
	for(let i = 0; i < 1000000000; i++) {
		a += b;
	}
	let total = a;
	return total;
}

console.time("C++");
console.log(addon.sum());
console.timeEnd("C++");

console.time("JS (JavaScript)");
console.log(jsSum());
console.timeEnd("JS (JavaScript)");
