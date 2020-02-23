#include "Date.h" //date.h the functions are announced with the prototypes; here we are implementing the function when a function is implemented outside of the class;

/* Pseudo Code example:
Class::Function(par) {
    body
}*/


void Date::SetDate(int d, int m, int y) {
    this->day = d;
    this->month = m;
    this->year = y;
}

void Date::Print() const {
    std::cout << this->month << "/"
                << this-> day << "/"
                << this->year << std::endl;
}

int Date::GetDay() const {return this-> day;}
int Date::GetMonth() const {return this-> month;}
int Date::GetYear() const {return this-> year;}
