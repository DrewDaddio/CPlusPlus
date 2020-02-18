#include <iostream>

/*void Print(int arr[], int len);
void Print(double arr[], int len); //This will be an overloaded function.
*/

template <typename TYPE>
void Print(TYPE arr[], int len) {

    std::cout << "[";

    for(int i = 0; i < len -1; ++i)
        std::cout << arr[i] << ", ";

    if(len !=0 )
        std::cout << arr[len -1];

    std::cout << "]" << std::endl;
}

int main(){
    //generic programming
    std::cout << "Two types of deduction" << std::endl;
    std::cout << "1: Partial " << std::endl << "2: Complete" << std::endl;

    std::cout << "The generic function will take pretty much anything we throw at it." << std::endl;
    std::cout << "check the code for the different types of variables.." << std::endl;

    int arr00[] = {2, 3, 4, 5, -6};
    double arr01[] = {2.01, 3.02, 4.03, 5, -6};
    float arr02[] = {2, 3, 4, 5, -6};
    char arr03[] = {'a', 'b', 'c', 'd', 'e'};


    const int len = sizeof arr01 / sizeof arr01[0]; //sizeof is an operator which returns the size of an object in bytes

    std::cout << "For an int, 4 is the size of a single element in terms of bytes." << std::endl;
    std::cout << "For a double, 8 is the size of a single element in terms of bytes." << std::endl;
    std::cout << sizeof arr01 << " " << sizeof arr01[0] << std::endl;

    Print(arr01, len);

    std::cout << sizeof arr00 << " " << sizeof arr00[0] << std::endl;
    Print(arr00, len);

    std::cout << sizeof arr02 << " " << sizeof arr02[0] << std::endl;
    Print(arr02, len);

    std::cout << sizeof arr03 << " " << sizeof arr03[0] << std::endl;
    Print(arr03, len);

    std::cout << "Machines differentiate overloaded functions based on the arguments passed to it." << std::endl;
    std::cout << "Generic function is a function that is declared with type parameters but when it's called actual types are used." << std::endl;


    return 0;
}

/*
void Print(int arr[], int len) {
    std::cout << "[";

    for(int i = 0; i < len -1; ++i)
        std::cout << arr[i] << ", ";

    if(len !=0 )
        std::cout << arr[len -1];

    std::cout << "]" << std::endl;
}

void Print(double arr[], int len) {
    std::cout << "[";

    for(int i = 0; i < len -1; ++i)
        std::cout << arr[i] << ", ";

    if(len !=0 )
        std::cout << arr[len -1];

    std::cout << "] DOUBLE" << std::endl;
}
*/

/*
template <typename TYPE>
void Print(TYPE arr[], int len) //When called actual types are used rather than the type parameter*/
