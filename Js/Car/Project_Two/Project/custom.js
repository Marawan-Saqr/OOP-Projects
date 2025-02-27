class Car {
  // Properties
  #mi;
  constructor(id, make, model, year, color, mileage) {
    this.i = id,
    this.m = make,
    this.mo = model,
    this.y = year,
    this.c = color
    this.#mi = mileage;
  }
  // Methods
  getMileage() {
    if (this.#mi < 0) {
      return "Can't Return mileage In Negative";
    } else {
      return this.#mi;
    }
  }
  getCarInformations() {
    return `Car Details Are Make Is ${this.m}, Model Is ${this.mo}, Release Year Is ${this.y} And Color Is ${this.c}`;
  }
  updateCarDetails(carID, details) {
    if (this.i === carID) {
      this.m = details.make;
      this.mo = details.model;
      this.y = details.year;
      this.c = details.color;
      return `Car with ID ${carID} updated successfully New Details Are ${this.getCarInformations()}.`;
    }
    return `Car with ID ${carID} not found.`;
  }
  static compareCars(carOne, carTwo) {
    if (carOne.y < carTwo.y) {
      return `Car with ID ${carOne.i} (${carOne.m} ${carOne.mo}, ${carOne.y}) is older than Car with ID ${carTwo.i} (${carTwo.m} ${carTwo.mo}, ${carTwo.y}).`;
    } else if (carOne.y > carTwo.y) {
      return `Car with ID ${carOne.i} (${carOne.m} ${carOne.mo}, ${carOne.y}) is newer than Car with ID ${carTwo.i} (${carTwo.m} ${carTwo.mo}, ${carTwo.y}).`;
    } else {
      return `Car with ID ${carOne.i} (${carOne.m} ${carOne.mo}, ${carOne.y}) is the same age as Car with ID ${carTwo.i} (${carTwo.m} ${carTwo.mo}, ${carTwo.y}).`;
    }
  }
}





// Operations
let carOne = new Car(1, "make", "BMW", 1998, "Black", 15000);
let carTwo = new Car(2, "make", "Mercedes", 1999, "Red", 20000);
console.log(`car ID Is ${carOne.i}`);
console.log(`Car Make Is ${carOne.m}`);
console.log(`Car Model Is ${carOne.mo}`);
console.log(`Car Year Is ${carOne.y}`);
console.log(`Car Color Is ${carOne.c}`);
console.log(`Car Mileage Is ${carOne.getMileage()}`);
console.log(carOne.getCarInformations());
console.log(carOne.updateCarDetails(1, {make: "make2", model: "BMW", year: 1998, color: "Black"}));
console.log(Car.compareCars(carOne, carTwo));