// Create employee1
const employee1 = {
  name: "Marawan Mahmoud Nasr",
  position: "Front-End Developer",
  salary: 6000,
  getDetails: function() {
    return `My Name Is ${this.name} I Work As A ${this.position} My Salary Is ${this.salary}`;
  }
}


// Create employee2
let employee2 = new Object(employee1);


// Base Employee
const baseEmployee = { company: "Tech Corp" };


// Create employee3
const employee3 = Object.assign({}, baseEmployee, employee1);
employee3['bonus-rate'] = employee3.salary + 10;
console.log(employee3.name);
console.log(employee3['bonus-rate']);