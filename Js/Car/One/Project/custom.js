class Car {
  // Properties
  constructor(brand, model, year) {
    this.b = brand;
    this.m = model;
    this.y = year;
  }
  // Methods
  start() {
    return `The ${this.b} ${this.m} is starting...`;
  }
  updateModel(modelUpdated) {
    this.m = modelUpdated;
  }
}


const carOne = new Car("BMW", "M22", 1988);
console.log(carOne.m);
console.log(carOne.start());


carOne.updateModel("Mercedes");
console.log(carOne.m);