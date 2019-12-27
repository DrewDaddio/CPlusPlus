#include <iostream>

//In general, we can declare the functions up top and put the body of the function below.
//void function: Will not return anything
void Print(int n);
int GetLastDigit(const int n); //const will ensure the variable does not change.


int main() {
    std::cout << "Functions:" << std::endl;
    std::cout << "Main is a great example of a function." << std::endl;

    /* while(1) { //infinite loop
        std::cout << "Enter number (0 for end): ";
        int num;
        std::cin >> num;
        if(num == 0)
            break;
        Print(num);
    } */

    int n;
    std::cout << "Enter num: ";
    std::cin >> n;

    int last_digit = GetLastDigit(n);

    std::cout << "Last digit of " << n << " is: " << last_digit << std::endl;

    return 0;
}


//Body of the Print function; void functions do not require a return
void Print(int n) {
    for(int i = 1; i <= n; ++i)
        std::cout << "*";
    std::cout << std::endl;
}

//body of GetLastDigit function; This function requires a return
int GetLastDigit(const int n) {
    /*
    int result = n % 10;
    return result;
    */
    return n % 10;
}
