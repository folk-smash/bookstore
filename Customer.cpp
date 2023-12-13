// Customer.cpp

#include "Customer.h"
#include <iostream>

Customer::Customer(int customerId, const std::string& name, const std::string& email)
    : customerId(customerId), name(name), email(email) {}

int Customer::getCustomerId() const {
    return customerId;
}

const std::string& Customer::getName() const {
    return name;
}

const std::string& Customer::getEmail() const {
    return email;
}

void Customer::displayInfo() const {
    std::cout << "Customer ID: " << customerId << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Email: " << email << "\n";
}
