// Class Book
class Book {
  // Properties
  constructor(title, author, isbn, isBorrowed = false) {
    this.t = title;
    this.a = author;
    this.i = isbn;
    this.b = isBorrowed;
  }
  // Methods
  borrow() {
    if (!this.b) {
      return `Yes Book Available You Can Borrow It`;
    } else {
      return `Sorry The Book Has Been Borrowed`;
    }
  }
  returnBook() {
    if (this.b) {
      this.b = false;
      return "Thank you for returning the book!";
    } else {
      return "This book was not borrowed.";
    }
  }
  getDetails() {
    return `The Book Name Is ${this.t} and Book Author Is ${this.a} and Book ISBN Is ${this.i}`;
  }
}

// Class EBook 
class Ebook extends Book {
  // Properties
  constructor(title, author, isbn, isBorrowed = false, fileSize) {
    super(title, author, isbn, isBorrowed);
    this.fs = fileSize;
  }
  // Methods
  download() {
    return `The ${this.t} Is Being downloaded... And Its Size Is ${this.fs}MB`;
  }
}

// Class Library
class Library {
  static librayName = "Mohmed & Samir";
  // Properties
  constructor(booksLibraray) {
    this.bl = booksLibraray;
  }
  // Methods
  addBook(newBook) {
    this.bl.push(newBook);
    return this.bl;
  }
  findBook(isbn) {
    for (let book of this.bl) {
      if (book.i === isbn) {
        return `Found: ${book.getDetails()}`;
      }
    }
    return "Not Found";
  }
  updateBook(isbn, newDetails) {
    for (let book of this.bl) {
      if (book.i === isbn) {
        // Update only the provided details
        if (newDetails.title !== undefined) book.t = newDetails.title;
        if (newDetails.author !== undefined) book.a = newDetails.author;
        if (newDetails.isBorrowed !== undefined) book.b = newDetails.isBorrowed;
        return `Book with ISBN ${isbn} updated successfully: ${book.getDetails()}`;
      }
    }
    return `Book with ISBN ${isbn} not found.`;
  }
  listBooks() {
    return this.bl;
  }
  listAvailableBooks() {
    let availableBooks = [];
    for (let book of this.bl) {
      if (book.b === false) {
        availableBooks.push(book.getDetails());
      }
    }
    return availableBooks.length > 0 ? `Available Books:\n${availableBooks.join("\n")}` : "No Books Available To Borrow";
  }
  static getLibraryName() {
    return this.librayName;
  }
}


// Oprations
let bookOne = new Book("Blue Sky", "William Edward", "3212-3456-5732", true);
let library = new Library([]);