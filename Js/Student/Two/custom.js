// School Function
function School() {
  this.studentArray = [];
}

// List Students
School.prototype.listStudents = function() {
  return this.studentArray;
};

// Add Student
School.prototype.addStudent = function(student) {
  this.studentArray.push(student);
  console.log(`✅ ${student.name} has been added.`);
};

// Remove Student
School.prototype.removeStudent = function(name) {
  let initialLength = this.studentArray.length;
  this.studentArray = this.studentArray.filter(student => student.name !== name);

  if (this.studentArray.length < initialLength) {
    console.log(`❌ ${name} has been removed.`);
  } else {
    console.log(`⚠️ ${name} not found.`);
  }
};

// Find Student
School.prototype.findStudent = function(name) {
  let student = this.studentArray.find(student => student.name === name);
  return student ? student.getDetails() : `⚠️ Student ${name} not found.`;
};

// Student Constructor
function Student(name, age, grade) {
  this.name = name;
  this.age = age;
  this.grade = grade;
}

// Get Student Details
Student.prototype.getDetails = function() {
  return `👨‍🎓 ${this.name}, Age: ${this.age}, Grade: ${this.grade}`;
};

// Testing
let schoolBase = new School();
let studentOne = new Student("Marawan", 28, "A");
let studentTwo = new Student("Osama", 38, "S");
let studentThree = new Student("Mohamed", 28, "B");

schoolBase.addStudent(studentOne);
schoolBase.addStudent(studentTwo);
console.log(schoolBase.listStudents());

schoolBase.removeStudent("Marawan");
console.log(schoolBase.listStudents());

schoolBase.addStudent(studentThree);
console.log(schoolBase.listStudents());

console.log(schoolBase.findStudent("Mohamed"));
console.log(schoolBase.findStudent("John"));