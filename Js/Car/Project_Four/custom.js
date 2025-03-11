function Car(brand, model, year) {
  // Properties
  this.brand = brand;
  this.model = model;
  this.year = year;
  this.speed = 0;
}

// Methods Prototype
Car.prototype.accelerate = function (amount) {
  this.speed += amount;
  return `Speed increased to ${this.speed} KM/H`;
};

Car.prototype.brake = function (amount) {
  if (this.speed - amount < 0) {
    this.speed = 0;
  } else {
    this.speed -= amount;
  }
  return `Speed reduced to ${this.speed} KM/H`;
};

Car.prototype.displayInfo = function () {
  return `This is a ${this.brand} ${this.model} (${this.year}), currently moving at ${this.speed} KM/H.`;
};

// Instantiate
let carOne = new Car("BMW", "M3", 1997);


console.log(carOne.displayInfo());
console.log(carOne.accelerate(30));
console.log(carOne.brake(20));
console.log(carOne.brake(15));
console.log(carOne.displayInfo());