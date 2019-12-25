#include <iostream>

#define PI 3.14

int main() {

    auto x = 10.5; //auto keyword will recognize this as an double variable
    auto y = 10; //auto keyword will recognize this as an integer variable (int)

    int var1 = 10;
    int var2 (20); //This is constructor intialization
    int var3 {30}; //This is uniform initilization; Recommended to use. This allows the usage of a consistent syntax to initialize variables and objects ranging from primitive types to aggregate.
}

//auto keyword have been implemented as of C++11
