// BookstoreSystem.cpp

#include "Book.h"
#include "Customer.h"
#include "Transaction.h"
#include <iostream>

int main() {
    // Create books
    Book book1(1, "The Catcher in the Rye", "J.D. Salinger");
    Book book2(2, "To Kill a Mockingbird", "Harper Lee");

    // Create customers
    Customer customer1(101, "Alice", "alice@example.com");
    Customer customer2(102, "Bob", "bob@example.com");

    // Create transactions
    Transaction transaction1(1001, book1, customer1, 25.0);
    Transaction transaction2(1002, book2, customer2, 30.0);

    // Display information
    std::cout << "Transaction Information:\n";
    transaction1.displayInfo();
    std::cout << "\n";
    transaction2.displayInfo();

    return 0;
}
