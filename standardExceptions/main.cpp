#include <iostream>
#include <stdexcept> //standard exceptions

void tralalala(int n) {
    if(n == 0)
        throw 1;
    if(n == -1)
        throw 'c';
}

int main() {

    std::cout << "Listing of standard errors:" << std::endl;
    std::cout << "std::logic_error" << std::endl;
    std::cout << "std::domain_error" << std::endl;
    std::cout << "std::invalid_argument" << std::endl;
    std::cout << "std::length_error" << std::endl;
    std::cout << "std::out_of_range" << std::endl;
    std::cout << "std::range_error" << std::endl;
    std::cout << "std::overflow_error" << std::endl;
    std::cout << "std::underflow_error" << std::endl;

    std::cout << std::endl;
    std::cout << "How to catch an exception that was thrown:" << std::endl;
    std::cout << "Generic block" << std::endl;

    int n;
    std::cout << "Enter number: 0 or -1" << std::endl;
    std::cin >> n;

    try {
        tralalala(n);
    }
    catch(...) {
        std::cout << "Haha you just threw an \"ERROR!\"" << std::endl;
    }

    std::cout << "nested try catch blocks: pseudo code example" << std::endl;
    std::cout << "See the code to see the pseudo code" << std::endl;
    /*
    try {
        //some code
        try {
            //some code
        }
        catch(...) {
            //some code
            )
        }
        catch(...) {
            //some code
        }*/



    return 0;
}
