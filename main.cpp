#include<iostream>

class Date{
        int day;
        int month;
        int year;

    public:
    void SetDate(int d, int m, int y) {
        this->day = d; //this is a pointer.
        this->month = m;
        this->year = y;
    } //This is a method because it's inside a class; outside of the class it would be a function.

    void Print() const{
        std::cout << this->month << "/"
            << this->day << "/"
            << this->year << std::endl;
    }

    int GetDay() const {return this->day;}
    int GetMonth() const {return this->month;}
    int GetYear() const {return this->year;}

    int SetDay(int d) {this->day = d;}
    int SetMonth(int m) {this->month = m;}
    int SetYear(int y) {this->year = y;}
};

int main() {
    Date dt;
    Date dt1;
    dt.SetDate(12, 5, 1993);
    dt1.SetDate(10, 10, 2010);

    dt.Print();
    dt1.Print();

    int m, d, y;
    std::cout << "Enter date: ";
    std::cin >> m >> d >> y;

    dt.SetDate(d, m, y);
    std::cout << "Entered date: ";

    dt.Print();

    std::cout << "Month: " << dt.GetMonth();



    return 0;
}
