function Person(name, age) {
  // Properties
  this.name = name;
  this.age = age;
}

Person.prototype.introduce = function() {
  return `Hello, my name is ${this.name} and I am ${this.age} years old.`;
}

let person_one = new Person("Osama", 38);
let person_two = new Person("Marawan", 28);

console.log(person_one.introduce());
console.log(person_two.introduce());