class Person {
  // Proberties
  constructor(firstName, lastName, age) {
    this.fn = firstName;
    this.ln = lastName;
    this.a = age;
  }
  // Method
  getFullName() {
    return `Hello ${this.fn} ${this.ln} Your Age Is ${this.a}`;
  }
}



const personOne = new Person("Marawan", "Saqr", 27);
console.log(personOne.fn);
console.log(personOne.ln);
console.log(personOne.a);
console.log(personOne.getFullName());