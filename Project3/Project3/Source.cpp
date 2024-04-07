#include <iostream>
using namespace std;

class Book {
    char* author;
    char* title;
    int year;
    int pageCount;

public:
    Book(const char* pAuthor, const char* pTitle, int pYear, int pPageCount) : year{ pYear }, pageCount{ pPageCount } {
        author = new char[strlen(pAuthor) + 1];
        for (int i = 0; pAuthor[i] != '\0'; i++) {
            author[i] = pAuthor[i];
        }
        author[strlen(pAuthor)] = '\0';

        title = new char[strlen(pTitle) + 1];
        for (int i = 0; pTitle[i] != '\0'; i++) {
            title[i] = pTitle[i];
        }
        title[strlen(pTitle)] = '\0';
    }

    Book(const Book& other) : year{ other.year }, pageCount{ other.pageCount } {
        author = new char[strlen(other.author) + 1];
        for (int i = 0; other.author[i] != '\0'; i++) {
            author[i] = other.author[i];
        }
        author[strlen(other.author)] = '\0';

        title = new char[strlen(other.title) + 1];
        for (int i = 0; other.title[i] != '\0'; i++) {
            title[i] = other.title[i];
        }
        title[strlen(other.title)] = '\0';
    }

    ~Book() {
        delete[] author;
        delete[] title;
    }

    const char* getAuthor() {
        return author;
    }

    const char* getTitle() {
        return title;
    }

    int getYear() {
        return year;
    }

    int getPageCount() {
        return pageCount;
    }
};

int main() {
    Book book1{ "J. K. Rowling", "Harry Potter and Sorcerer's Stone", 1997, 400 };
    Book book2(book1);
    cout << "Author: " << book2.getAuthor() << endl;
    cout << "Title: " << book2.getTitle() << endl;
    cout << "Year: " << book2.getYear() << endl;
    cout << "Page count: " << book2.getPageCount() << endl;
    return 0;
}