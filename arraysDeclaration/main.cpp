#include <iostream>

int main() {
    //Array
    std::cout << "Array" << std::endl;
    int arr1[10]; //This is the declared array with a size (amount of elements) of 10

    arr1[0] = 5;
    arr1[4] = 10;
    arr1[9] = 100;

    std::cout << arr1 << std::endl;
    std::cout << "The above array does not have all elements declared. There are only 3/10 elements declared." << std::endl;
    std::cout << "The above array is an int so all undeclared values should be 0." << std::endl;

    /*An example of bad code;
    float arr2[3];
    //A value is being assigned to an element that exists outside the array
    arr[3]= 11; */

    /*Memory Representation;
    //All elements of an array are placed in memory locations.
    //They are placed 1 after another in a series
    */

    //Array Initialization;
    std::cout << "Array Initialization" << std::endl;
    int arr2[5] = {0, 1, 2, 3, 4};

    std::cout << "This will return the array and the third element of the array." << std::endl;
    std::cout << arr2 << std::endl;
    std::cout << arr2[3] << std::endl;

    //For Loop: Array;
    int arr3[100] = {0}; //All elements will have the value 0;
    int number;

    std::cout << "Array for loop" << std::endl;
    for(int i = 0; i < 100; ++i ) {
        arr3[i] = i;
        std::cout << arr3[i] << std::endl;
    }

    std::cout << "What element would you like initialized in array arr3?" << std::endl;
    std::cin >> number;
    std::cout << "You selected: " << arr3[number] << std::endl;

    //Array Algorithms;
    std::cout << "Array Algorithms" << std::endl;

    const int noe = 10;
    int arr4[10];

    for(int i = 0; i < noe; ++i) {
        std::cout << "Enter " << i + 1 << ". Number: ";
        std::cin >> arr4[i];
    }

    std::cout << "The array elements for arr4 is: " << arr4 << std::endl;


    int MAX = arr4[0];
    for(int i = 1; i < noe; ++i)
        if(arr4[i] > MAX)
            MAX = arr4[i];

    std::cout << "The max value in array arr4 is: " << MAX << std::endl;


    int MIN = arr4[10];
    for(int i = 1; i < noe; ++i)
        if(arr4[i] < MIN)
            MIN = arr4[i];

    std::cout << "Min: " << MIN << " | MAX: " << MAX << std::endl;

    //C String;
    std::cout << "C String" << std::endl;

    char str[6] = {'H', 'E', 'L', 'L', 'O', '\0', }; //Must end with the null terminator ('\0') as it as a c string

    std::cout << "Char String: " << str << std::endl;


    return 0;
}
