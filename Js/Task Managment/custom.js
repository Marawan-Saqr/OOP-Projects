class Task {
  // Properties
  constructor(id, title, description, status) {
    this.i = id;
    this.t = title;
    this.d = description;
    this.s = status;
    this.tasksArray = [];
  }
  // Methods
  listTasks() {
    return this.tasksArray;
  }
  addTask(task) {
    this.tasksArray.push(task);
  }
  deleteTask(id) {
    this.tasksArray = this.tasksArray.filter((item)=> {
      return item.i !== id;
    })
    return this.tasksArray;
  }
  updateTask(id, updatedData) {
    let task = this.tasksArray.find(item => item.i === id);
    if (task) {
      task.t = updatedData.title || task.t;
      task.d = updatedData.description || task.d;
      task.s = updatedData.status !== undefined ? updatedData.status : task.s;
    }
    return this.tasksArray;
  }

}

// Operations
let taskOne = new Task(1, "Study Js", "Js Basics Lessons", true);
let taskTwo = new Task(2, "Study Html", "Html Basics Lessons", false);

// Add tasks
taskOne.addTask(taskOne);
taskOne.addTask(taskTwo);

console.log(taskOne.updateTask(1, { title: "Study Advanced Js", status: false }));

// Delete Task
console.log(taskOne.deleteTask(taskOne.i));

// All Tasks
console.log(taskOne.listTasks());