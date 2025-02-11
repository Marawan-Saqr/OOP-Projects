function Phone(serial, color, price, camera, isYearModel) {
  this.serial = serial;
  this.color = color.toUpperCase();
  this.price = price;
  this.camera = camera;
  this.model = isYearModel;
}


let phoneOne = new Phone(1234567, "red", 300, 4, true);
let phoneTwo = new Phone(6453627, "blue", 200, 5, false);

console.log(phoneOne);
console.log(phoneTwo);