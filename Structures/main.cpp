#include <iostream>

struct Date {
        //place list of attributes here
        int day;
        int month;
        int year; //user defined structures
        //these attributes will only be created once the variable Date is created.
    };

struct Book {
    int ID;
    std::string Name;
    std::string Author;
    Date Published;
    static int Count;


};

int Book::Count; //This needs to be here to reserve memory space


int main() {
    std::cout << "This chapter is to learn Structures" << std::endl;

    Date dt1, dt2; //this is the variable dt of type Date; dt1 & dt2 are examples of 2 variables from the same structure

    std::cout << "Enter day: ";
    std::cin >> dt1.day;

    std::cout << "Enter month: ";
    std::cin >> dt1.month;

    std::cout << "Enter year: ";
    std::cin >> dt1.year;

    std::cout << "Entered date: ";
    std::cout << dt1.month << "/" << dt1.day << "/" << dt1.year << std::endl;

    dt2.year = 2020;
    std::cout << "Now we'll replace the year with dt2.year variable: 2020" << std::endl;
    std::cout << dt1.month << "/" << dt1.day << "/" << dt2.year << std::endl;

    Book b1, b2;
    b1.ID = 0;
    b1.Name = "C++ For Dummies";
    b1.Author = "Random Guy";
    b1.Count = 1;

    std::cout << b1.Count << std::endl;
    b2.Count = 10;
    std::cout << b2.Count << std::endl;

    Book::Count = 100;
    std::cout << b1.Count << std::endl;

    std::cout << "Arrays of Structure" << std::endl;

    Date dt_for_book1 =  {10, 10, 2016};
    Date dt_for_book2 = {11, 11, 2011};

    Book book1 = {0, "FaceBook the book", "Zarc Muckerberg", dt_for_book1};

    Book books[100];
    books[0];

    books[2].ID = 10;
    books[14].Author = "Tralala";

    std::cout << books[2].ID << std::endl;
    std::cout << books[14].Author << std::endl;

    int IDs[100];
    int Year[100];
    int Day[100];
    int Month[100];


    return 0;
}
