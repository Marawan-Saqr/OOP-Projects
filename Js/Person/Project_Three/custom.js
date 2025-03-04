const person = {
  name: "Marawan Mahmoud Nasr",
  city: "6th October City",
}
person.age = 28;

const student = Object.assign({}, person, {grade: "A"});

const person2 = new Object({
  name: "Hesham Mahmoud Nasr",
  city: "Sudia Arab"
});
person2['age'] = 38;

const person3 = Object.assign({}, person2, { name: "Ahmed Mahmoud Nasr", city: "6th October City" });
person3['age'] = 35;



console.log(person);
console.log(student);
console.log(person2);
console.log(person3);