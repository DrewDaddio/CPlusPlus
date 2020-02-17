#include <iostream>
#include <cmath>
#include <stdexcept> //for standard defined exceptions;

//Function:
/*
double Sqrt(double x) {

    if(x < 0)
        throw "Negative number!";

    double sroot = std::pow(x, 0.5);
    return sroot;
}*/

void something(int voidn) {
    if(voidn == 0)
        throw 1;
    if(voidn > 0 && voidn < 100)
        throw "The number is between 0 and 100. This is actually not an exception.";
    if(voidn == -1)
        throw 'c';
    if(voidn < -1)
       throw std::domain_error("Some std excpetion");

}

int main() {
    std::cout << "Exceptions" << std::endl;

    std::cout << "Square Root Function: " << std::endl;
    int num;
    //double num;

    std::cout << "enter number: ";
    std::cin >> num;

    //double square_root;

    try { //a try can have many catch blocks
        //square_root = Sqrt(num);
        something(num);

    }
    catch(char c) {
        std::cout << "Caught: CHAR " << std::endl;
    }
    catch(int i) {
        std::cout << "Caught: INT" << std::endl;
    }
    catch(const char *text) {
        std::cout << "Caught Text: " << text << std::endl;
    }
    catch(std::domain_error de) {
        std::cout << "Caught domain_error with text: " << de.what() << std::endl;
    }



    //std::cout << "Sqrt (" << num << ") = " << square_root << std::endl;

    return 0;
}

//triblock
/*
try {
    try executing the code
}
catch(type of exception) {
    executing throw;
}

//Formats for throwing exceptions;
/*
throw "Negative numbers are not allowed!";
throw 0;
throw std::domain_error("Negative numbers are not allowed!");
throw std::exception("Negative numbers are not allowed!");
*/
