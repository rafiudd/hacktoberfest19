function* generatorFunction() {
  console.log('This will be executed first.');
  yield 'Hello, ';
  console.log('I will be printed after the pause');
  yield 'World!';
}
const generator = generatorFunction();
console.log(generator.next().value);
console.log(generator.next().value);
console.log(generator.next().value);
