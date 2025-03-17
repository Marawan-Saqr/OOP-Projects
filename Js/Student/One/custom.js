// Student One With Object Literal
const studentOne = {
  id: Math.random(),
  studentName: "Marawan Mahmoud Nasr",
  studentAge: 28,
  studentStudy: ["C++", "JavaScript", "React"],
  studentGPA: "A+"
}

console.log(studentOne);


// Student Two With new Keyword
const studentTwo = new Object();
studentTwo.id = Math.random();
studentTwo.studentName = "Mohmed Esmail Mohmed";
studentTwo.studentAge = 23;
studentTwo.studentStudy = ["Database", "Oracle", "Paython"];
studentTwo.studentGPA = "B+";

console.log(studentTwo);


// Student Three With Create
const studentThree = Object.create(studentOne);

studentThree.style = "Leader";
console.log(studentThree.studentName);


// Student Four With Assign
const studentFour = Object.assign({}, studentOne, studentThree);
console.log(studentFour);