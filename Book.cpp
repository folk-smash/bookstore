// Book.cpp

#include "Book.h"
#include <iostream>

Book::Book(int bookId, const std::string& title, const std::string& author)
    : bookId(bookId), title(title), author(author) {}

int Book::getBookId() const {
    return bookId;
}

const std::string& Book::getTitle() const {
    return title;
}

const std::string& Book::getAuthor() const {
    return author;
}

void Book::displayInfo() const {
    std::cout << "Book ID: " << bookId << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
}
