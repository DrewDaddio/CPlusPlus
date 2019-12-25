#include <iostream>

int main() {
    int n1, n2, n3, n4, n5;

    std::cout << "Enter five integers (separated by space): ";

    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum = n1 + n2 + n3 + n4 + n5;

    float average = sum / 5; //This is the wrong way; This is doing integer division which drops the decimals and only returns the integer.
    float faverage = sum / 5.0f; //This is the right way to get the floating point result.

    std::cout << "The sumis: " << sum << std::endl;
    std::cout << "The wrong way (integer division with the float variable) average value is: " << average << std::endl;
    std::cout << "The right way (division with the float variable) average value is: " << faverage << std::endl;


    return 0;
}
