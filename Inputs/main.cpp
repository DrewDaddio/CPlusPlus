#include <iostream> //input output stream

int main() {
    int number; //Declares a variable number of type int
    std::cout << "Enter an integer: ";
    std::cin >> number; //cin = character in; extraction operator = number, the user will input

    int squared = number * number; //variable "squared" is declared.

    std::cout << "Squared number is: " << squared << std::endl; //endl used to go into the next line, it also flushes the current buffer

    std::cout << "Number is: " << number << ". Squared number is: " << number * number << " also known as " << squared << std::endl;

    return 0;
}
