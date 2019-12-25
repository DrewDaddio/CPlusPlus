#include <iostream>
#include <iomanip> //library that includes setw

//commented definitions
//#include <xxx> = Libraries
//iostream = input/output stream
//cout = character out; variable
//namespace = used to define a scope where identifiers are declared.
//scope operator = ::
//insertion operator = <<
//endl = end line; new line
//setw = set width
//unsigned char = range from

int main() {
    std::cout << "Hello, World!" << std::endl;

    int year = 2019, month = 12, date = 14;

    std::cout << std::setw(6) << year << " is today's year." << std::endl;
    std::cout << std::setw(12) << month << " is today's month." << std::endl;
    std::cout << std::setw(24) << date << " is today's date." << std::endl;

    std::cout << "Let's fill the empty spaces before the date with 0"
    << std::setw(24) << std::setfill('0')
    << year << "." << month << "." << date;

    return 0;
}


//Misc:
//C++ ignores whitespaces
//Every line needs to end with a ;
//don't forget the curly boy
//common practice is to return 0 at the end of the int main(void) function,
//Variables cannot start with an integer
/*
    variable types:
    -Bool: True/False
    -Char: Characters; unsigned char = range 0 to 255 ; signed char = range -128 to 127
    -Short: represents very small numbers; unsigned short represents numbers range 0 to 65536; signed short represents number range -32268 to 32267
    -Float: represents real numbers; precision to 6 decimals.
    -Long:  variable type "long long" represents really big numbers.
    -Int: Integers; Unsigned INT = only positive values can be assigned
    -Double: similar to float precision to 13 or 15 decimals.
    -etc.
    */

