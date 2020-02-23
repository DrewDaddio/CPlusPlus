#ifndef DATE_H //This is the include guard. prevents from including the same file multiple times; IfNDef = if not defined
#define DATE_H

#include <iostream>

class Date {
    int day;
    int month;
    int year;

    public:
        void SetDate(int d, int m, int y);
        void Print() const;
        int GetDay() const;
        int GetMonth() const;
        int GetYear() const;

};

#endif // DATE_H //Indicates the end of the include guard
