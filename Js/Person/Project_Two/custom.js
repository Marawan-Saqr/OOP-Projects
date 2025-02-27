function Person(firstName, lastName, age) {

  // Properties
  this.firstName = firstName;
  this.lastName = lastName;
  this.age = age;


  // Fullname Function
  this.fullName = function() {
    return `Fullname Is ${this.firstName} ${this.lastName}`;
  }


  // Change Name Function
  this.changeName = function (newName) {
    if (this.age >= 18) {
      this.firstName = newName;
      return `Your New Name Is ${this.firstName}`;
    } else {
      return `No You Can't Change The Name Because You Under 18 Year`;
    }
  }

}


let personOne = new Person("Marawan", "Saqr", 28);
console.log(personOne.firstName);
console.log(personOne.lastName);
console.log(personOne.age);
console.log(personOne.fullName());
console.log(personOne.changeName("Ahmed"));