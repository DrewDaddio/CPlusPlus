#include <iostream>
#include <cmath>

int main(){
    int n;

    //For loop
    std::cout << "For Loop" << std::endl;
    std::cout << "Enter int n: ";
    std::cin >> n;

    int sum = 0;


    for(int i = 1; i <= n; ++i)
    {
        int number;
        std::cout << "Enter: " << i << ". number: ";

        std::cin >> number;

        sum += number; //sum = sum + number;
    }

    /*
    for(initializer; condition; increment){
            Body; if the body of the for loop is composed out of a single line than the curly braces are not needed.
    }
     */

    std::cout << "Sum of for loop " << n << " entered numbers is: " << sum << std::endl;

    //While Loop
    int whilen;
    std::cout << "While Loop" << std::endl;
    std::cout << "Enter n:";
    std::cin >> whilen;

    int whilesum = 0;
    int whilei = 1;

    while(whilei <= whilen) {
        int whilenumber;

        std::cout << "Enter " << whilei << ". number: ";
        std::cin >> whilenumber;

        whilesum += whilenumber;

        ++whilei;
    }

    /*
    while(condition) {
        body;
        inc;
    } */

    std::cout << "Sum of while loop " << whilen << " entered numbers is: " << whilesum << std::endl;

    //DoWhile loop; similar to the while loop
    int dowhilen;

    std::cout << "Do While Loop" << std::endl;

    do {
        std::cout << "Enter a natural number (dowhilen): ";
        std::cin >> dowhilen;
    }
    while(dowhilen <= 0);

    double sqrt_n = std::sqrt(dowhilen);

    std::cout << "sqrt (" << dowhilen << ") = " << sqrt_n << std::endl;

    /*pseduocode
    do {
        block;
    }
    while(condition)
    */

    //For Each loop; new as of C++11
    int arr[] = {5, 4, 1, 2, 3, -2};
    double arr2[] = {1.1, 2.2, 6.1, 3.5};

    std::cout << "For Each Loop: Prints the contents of the array" << std::endl;
    for(int i : arr)
        std::cout << i << std::endl;

    std::cout << "For Each Loop: " << std::endl;
    for(double i : arr2)
        std::cout << i << std::endl;

    std::cout << "For Each Loop: With Generic integer type" << std::endl;
    for(auto i : arr2)
        std::cout << i << std::endl;

    std::cout << "For Loop" << std::endl;
    for(int i=0; i <= 5; ++i)
        std::cout << arr[i] << std::endl;

    //Break;
    std::cout << "Break" << std::endl;

    int breaksum = 0;
    for(int i = 1; i <= 50; ++i){
        int breaknumber;

        std::cout << "Enter a number (or -1 to end): ";
        std::cin >> breaknumber;

        if(breaknumber == -1)
            break;
        breaksum += breaknumber;
    }
    std::cout << "Sum is: " << breaksum;

    //Continue
    std::cout << "Continue" << std::endl;

    int completesum = 0;

    for(int i = 0; i <= 50; ++i) {
        if(i % 3 == 0)
            continue;

        std::cout << i << std::endl;
    }

    std::cout << "Now the continue for loop backward" << std::endl;

        for(int i = 20; i >= 1; --i) {
        if(i % 3 != 0)
            continue;

        std::cout << i << std::endl;
    }

    //Nested Loops;
    int M, N;
    std::cout << "Enter M and N, separated by space: ";
    std::cin >> M >> N;

    for(int i = 1; i <= M; ++i) {
        for(int ii = 1; ii <= N; ++ii)
            std::cout << "*";

        std::cout << std::endl;
    }




    return 0;

}
