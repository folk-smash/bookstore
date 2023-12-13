// Transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Book.h"
#include "Customer.h"

class Transaction {
private:
    int transactionId;
    Book book;
    Customer customer;
    double amount;

public:
    Transaction(int transactionId, const Book& book, const Customer& customer, double amount);

    int getTransactionId() const;
    const Book& getBook() const;
    const Customer& getCustomer() const;
    double getAmount() const;

    void displayInfo() const;
};

#endif
