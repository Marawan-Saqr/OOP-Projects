class Task {
  constructor(title, isCompleted = false) {
    this.title = title;
    this.isCompleted = isCompleted;
  }
  markAsDone() {
    if (this.isCompleted === false) {
      this.isCompleted = true;
    }
  }
  getStatus() {
    return `Task Status Is ${this.isCompleted ? "Done" : "Still Not Done Yet"}`;
  }
  getTaskInfo() {
    return `Details Of Task Are ${this.title} And It's Status Is ${
      this.isCompleted ? "Done" : "Still Not Done Yet"
    }`;
  }
}

// Operations
let task1 = new Task("Study C++");
console.log(task1);

task1.markAsDone();
console.log(task1);

console.log(task1.getStatus());
console.log(task1.getTaskInfo());