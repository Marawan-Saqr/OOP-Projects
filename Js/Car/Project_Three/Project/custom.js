function Car(brand, model, year) {

  this.brand = brand;
  this.model = model;
  this.year = year;

}

let carOne = new Car("BMW", "M7", 2010);
console.log(carOne);
console.log(carOne.brand);
console.log(carOne.model);
console.log(carOne.year);