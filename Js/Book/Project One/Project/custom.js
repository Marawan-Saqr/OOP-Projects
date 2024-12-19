class Book {
  // Properties
  constructor(title, author, pages, price) {
    this.t = title;
    this.a = author;
    this.p = pages;
    this.pr = price;
  }

  // Instance Method
  getSummary() {
    return `The book "${this.t}" by ${this.a} has ${this.p} pages.`;
  }

  // Static Method
  static comparePrice(bookOne, bookTwo) {
    if (bookOne.pr < bookTwo.pr) {
      return `"${bookOne.t}" is cheaper than "${bookTwo.t}".`;
    } else if (bookOne.pr > bookTwo.pr) {
      return `"${bookTwo.t}" is cheaper than "${bookOne.t}".`;
    } else {
      return `"${bookOne.t}" and "${bookTwo.t}" are priced the same.`;
    }
  }
}

// Creating book instances
const book1 = new Book("Metals", "George Willman", 300, 20);
const book2 = new Book("Blue Whale", "Ahmed Ezz", 150, 15);

// Testing methods
console.log(book1.getSummary());
console.log(book2.getSummary());

console.log(Book.comparePrice(book1, book2));