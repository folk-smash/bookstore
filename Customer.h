// Customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    int customerId;
    std::string name;
    std::string email;

public:
    Customer(int customerId, const std::string& name, const std::string& email);

    int getCustomerId() const;
    const std::string& getName() const;
    const std::string& getEmail() const;

    void displayInfo() const;
};

#endif
