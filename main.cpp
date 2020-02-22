#include <iostream>
#include <string>
#include <stdexcept>

class DummyClass {
    int dummy_attr1;
    char dummy_attr2;


    public:
        DummyClass() : dummy_attr1(0), dummy_attr2('E') {
            std::cout << "hello! Constructor here!!!!!!!" << std::endl;
        }
        DummyClass(int param) : dummy_attr1(param), dummy_attr2('P') {
            std::cout << "2nd Constructor here. Param = " << param << std::endl;
        }

        void Print() const {
            std::cout << "dummy_attr1 = " << dummy_attr1 << std::endl;
            std::cout << "dummy_attr2 = " << dummy_attr2 << std::endl;
        }

        friend int Add(DummyClass dc1, DummyClass dc2) {
            int result;
            result = dc1.dummy_attr1 + dc2.dummy_attr1;
            return result;
        }

        ~DummyClass () {
            std::cout << "Destructor has been called!" << std::endl;
        }
};

class Date {
    int day;
    int month;
    int year;
    std::string GetMonthName () const {
        static std::string months[] = {
            "January", "February", "March",
            "April", "May", "Jun", "July",
            "August", "September", "October",
            "November", "December"
        };
        return months[month - 1];
    }

    public:
    Date (int d, int m, int y) {
        this->SetDate(d, m, y);
    }
    void SetDate (int d, int m, int y) {
        SetDay(d);
        SetMonth(m);
        SetYear(y);
    }
    void Print() const{
        std::cout << this->month << "/"
            << this->day << "/"
            << this->year << std::endl;
    }
    void PrintNice () const {
        std::cout << day << " " << GetMonthName()
                << " " << year << std::endl;
    }
    int GetDay() const {return this->day;}
    int GetMonth() const {return this->month;}
    int GetYear() const {return this->year;}

    int SetDay(int d) {this->day = d;}
    int SetMonth(int m) {this->month = m;}
    int SetYear(int y) {this->year = y;}
};

template <typename TYPE>
class DummyGeneric {
    TYPE Attribute;

    public:
        DummyGeneric(TYPE Param) : Attribute(Param) {

        }
        TYPE GetAttribute() const { //this is a getter function
            return this->Attribute;
        }

        void SetAttribute(TYPE a) {
            this->Attribute = a;
        }
};


int main() {
    DummyClass dc1(100), dc2(200);

    int res = Add(dc1, dc2);
    std::cout << res << std::endl;

    DummyClass dummy1;

    dummy1.Print();

    DummyClass dummy2(100);
    dummy2.Print();

    Date dt1(1, 1, 2014);

    dt1.PrintNice();

    {
         DummyClass dummy2; //Destructor being called here.
     }

    DummyGeneric<int> dummy_int(10);
    DummyGeneric<double> dummy_double(10.99);
    DummyGeneric<char> dummy_char('E');

    dummy_char.SetAttribute('P');

    return 0;
};
