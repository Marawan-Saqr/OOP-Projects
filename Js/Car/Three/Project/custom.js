const bookObject = new Object({
  title: "Man Blue Sky",
  author: "Wiliam Man White",
  pages: 527,
  summry: function () {
    return `Book Title Is ${this.title} And It's Author Is ${this.author} And Has Pages ${this.pages}`;
  },
});

console.log(bookObject.title);
console.log(bookObject.author);
console.log(bookObject.pages);
console.log(bookObject.summry());