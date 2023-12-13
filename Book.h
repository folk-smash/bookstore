// Book.h

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    int bookId;
    std::string title;
    std::string author;

public:
    Book(int bookId, const std::string& title, const std::string& author);

    int getBookId() const;
    const std::string& getTitle() const;
    const std::string& getAuthor() const;

    void displayInfo() const;
};

#endif
