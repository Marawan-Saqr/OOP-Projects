class User {

  // Static Properties
  static userCount = 0;
  static roles = ["admin", "editor", "viewer"];

  constructor(name) {
    this.name = name;
    User.userCount++;
  }


  static isVaildRole(role) {
    if (User.roles.includes(role)) {
      return `Yes ${role} Is Valid Role`;
    } else {
      return `${role} Not A Valid Role`;
    }
  }

  static getUserCount() {
    return `Users Counts Now Are ${User.userCount}`;
  }
}



// Operations
let user1 = new User("Marawan");
let user2 = new User("Mohmed");
let user3 = new User("Ismail");
let user4 = new User("Osama");
let user5 = new User("Noha");
let user6 = new User("Yassmina");
let user7 = new User("Mai");



console.log(User.isVaildRole("root"));
console.log(User.getUserCount());