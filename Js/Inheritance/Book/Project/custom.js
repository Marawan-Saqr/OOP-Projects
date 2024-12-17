class Book {
  // Properties
  constructor(title, author, pages, price) {
    this.t = title;
    this.a = author;
    this.p = pages;
    this.pr = price;
  }
}


class AudioBook extends Book {
  //Properties
  constructor(title, author, pages, price, duration, narrator) {
    super(title, author, pages, price);
    this.d = duration;
    this.n = narrator;
  }
  // Methods
  getAudioBookDetails() {
    return `The Book Duration ${this.d} And narrator Is ${this.n}`;
  }
}

let audioBook = new AudioBook("Sky", "William", 300, 2000, "2 hours", "ok");

console.log(audioBook.t);
console.log(audioBook.a);
console.log(audioBook.p);
console.log(audioBook.pr);
console.log(audioBook.d);
console.log(audioBook.n);
console.log(audioBook.getAudioBookDetails());