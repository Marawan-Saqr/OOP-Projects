function BankAccount(ownerName, pin, balance = 1000) {

  // Properties
  this.ownerName = ownerName;
  this.balance = balance;
  this.transactions = [];
  this.pin = pin;

  // Access PIN Function
  this.accessPin = function(password) {
    return this.pin === password;
  };

  // Deposit Function
  this.deposit = function(amount) {
    this.balance += amount;
    this.transactions.push({
      type: "deposit",
      amount: amount,
      balance: this.balance
    });
    return `Deposit Was ${amount}. Your Current Balance Is ${this.balance}.`;
  };

  // Withdraw Function (Requires PIN)
  this.withdraw = function(amount, password) {
    if (!this.accessPin(password)) {
      return "❌ Incorrect PIN! Withdrawal denied.";
    }

    if (amount > this.balance) {
      return `❌ Your Amount ${amount} Is Bigger Than Current Balance ${this.balance}.`;
    }
    
    this.balance -= amount;
    this.transactions.push({
      type: "withdraw",
      amount: amount,
      balance: this.balance
    });
    
    return `Withdraw Was ${amount}. Your Current Balance Is ${this.balance}.`;
  };

  // Get Balance Function (Requires PIN)
  this.getBalance = function(password) {
    if (!this.accessPin(password)) {
      return "❌ Incorrect PIN! Access denied.";
    }
    return `Your Current Balance Is ${this.balance}.`;
  };

  // Get Transactions (Requires PIN)
  this.getTransactions = function(password) {
    if (!this.accessPin(password)) {
      return "❌ Incorrect PIN! Access denied.";
    }
    return this.transactions;
  };

}

// Operations
let userOne = new BankAccount("Marawan", 12345);

console.log(userOne.ownerName);
console.log(userOne.getBalance(12345));
console.log(userOne.deposit(4000));
console.log(userOne.withdraw(500, 12345));
console.log(userOne.withdraw(500, 11111));
console.log(userOne.getTransactions(12345));
console.log(userOne.getTransactions(11111));