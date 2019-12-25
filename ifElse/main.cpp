#include <iostream>

int main () {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    /*if(x > 6) {
        std::cout << "X is greater than 6" << std::endl;
    }
    if(10){
        std::cout << "10 is also true" << std::endl;
    }
    if(-4) {
        std::cout << "-4 is also true" << std::endl;
    }
    if(1.5) {
        std::cout << "EVERYTHING NOT ZERO IS TRUE" << std::endl;
    }
    if(10 > 5) {
        std::cout << "TRUE" << std::endl;
    }
    if(0) {
        std::cout << "THIS WILL NEVER BE PRINTED. THIS CONDITION WILL NOT CHANGE; CONSTANT" << std::endl;
    }
    else {
        std::cout << "X is not greater than 10" << std::endl;
    }*/
    if(x > 9)
        std::cout << "X is greater than 9" << std::endl;
    else
        std::cout << "X is NOT greater than 9" << std::endl;

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18)
        std::cout << "You are an adult!" << std::endl;
    else if (age > 13)
        std::cout << "You are a teenager" << std::endl;
    else if (age > 3)
        std::cout << "You are a child" << std::endl;
    else
        std::cout << "You are very very smart baby" << std::endl;


}


//if there is only 1 lineif then we can omit the curly brackets {}
