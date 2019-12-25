#include <iostream>

#define PI 3.14 //Defined macro constant: These are executed prior to the compiler being executed

int main() {
    int x = 5;
    x = 10;

    const int y = 3;
    //y = 6; The constant variable y cannot be changed. If you uncomment this line, you'll see that this throws an error.
    const int a = 1;
    int const b = 2;

    std::cout << PI << std::endl; //The defined macro constant

    std::cout <<"Enter circle radius: ";
    float radius;

    std::cin >> radius;

    float circle_area = PI * radius * radius;

    std::cout << "Circle's radius: " << circle_area << std::endl;



    return 0;
}

//Constant variables cannot be changed once they are declared.
//Constant variables can be declared before or after the variable, examples:
//const <var> or <var> const
