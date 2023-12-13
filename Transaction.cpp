// Transaction.cpp

#include "Transaction.h"
#include <iostream>

Transaction::Transaction(int transactionId, const Book& book, const Customer& customer, double amount)
    : transactionId(transactionId), book(book), customer(customer), amount(amount) {}

int Transaction::getTransactionId() const {
    return transactionId;
}

const Book& Transaction::getBook() const {
    return book;
}

const Customer& Transaction::getCustomer() const {
    return customer;
}

double Transaction::getAmount() const {
    return amount;
}

void Transaction::displayInfo() const {
    std::cout << "Transaction ID: " << transactionId << "\n";
    book.displayInfo();
    customer.displayInfo();
    std::cout << "Amount: $" << amount << "\n";
}
