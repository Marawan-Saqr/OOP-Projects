function Person(name, age, job) {
  // Properties
  this.name = name;
  this.age = age;
  this.job = job;
}

// Adding methods to the prototype of Person
Person.prototype.greet = function() {
  console.log(`${this.name} Greets You`);
}

Person.prototype.haveBirthday = function() {
  this.age += 1;
  console.log(`Happy Birthday! ${this.name} is now ${this.age} years old.`);
};


// Creating new Person objects
let person1 = new Person("Ahmed", 23, "IT");
let person2 = new Person("Marawan", 28, "Front-End Developer");
let person3 = new Person("Yassmina", 12, "Graphic Designer");
let person4 = new Person("Mohmed", 19, "Network Engineer");
let person5 = new Person("Mona", 33, "Cheif");


person1.greet();
person2.greet();
person3.greet();
person4.greet();
person5.greet();


person1.haveBirthday();
person2.haveBirthday();
person3.haveBirthday();
person4.haveBirthday();
person5.haveBirthday();