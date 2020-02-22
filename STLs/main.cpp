#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <map>
#include <functional>
#include <cmath>

double Calculate(std::function<double(double)> f, double x);
double TestFun1(double x);
double TestFun2(double x);

/*Function pseudocode
std::function<RETURN_TYPE(PARAM_TYPE, ...)> fun;

int myfun(double d) {
    ....
}

std::function<int(double)> f = myfun; //Variable f will take function myfun.
*/

int main() {

    std::cout << "STL: Standard Type Library" << std::endl;
    std::cout << "Types:" << std::endl;

    std::cout << "std::vector - represent Arrays" << std::endl;
    std::vector<int> vec1 (10);
    std::vector<double> vec2 (5);
    std::vector<int> vec3; //default initialization

    std::vector<int> vec4 (3, 7); // 3 elements initialized to 7.

    unsigned int vec1_size = vec1.size();

    for(int i = 0; i < vec4.size(); ++i)
        std::cout << vec4[i] << " ";

    std::cout << std::endl;

    int el = vec1.at(0);

    bool emp1 = vec2.empty();//we are using these mehods by adding the ".";
    bool emp2 = vec3.empty(); //The boolean will be true or false;

    std::cout << vec3.size() << std::endl;
    vec3.push_back(100);
    std::cout << vec3.size() << std::endl;

    std::vector<int> vec5 {5, 4, 3, 2, 1};

    for(int i : vec5)
        std::cout << i << " ";
    vec5.pop_back();
    std::cout << std::endl;

    for(int i : vec5)
        std::cout << i << " ";


    std::cout << "std::string - represent Arrays" << std::endl;

    std::string s1 = "Hey";
    std::string s2 = "This is an example of a string STL";
    std::cout << s1 <<  s2 << std::endl;

    std::string s3 = ("Hey how is it going?");
    std::cout << s3 << std::endl;

    std::string s4; //This represents an empty string.
    std::string s5 = ""; //This represents an empty string.

    unsigned int s1_size = s1.size();
    std::cout << "what is the unsigned int size of s1?" << s1_size << std::endl;

    bool emp = s1.empty(); //This will check if the string is empty

    char c1 = s1[0];
    char c2 = s1.at(0);

    std::cout << c1 << " " << c2 << std::endl;

    if(s1 == s1) {}
    if(s2 != s1) {}
    if(s1 == "Hello") {}

    if(s1 > s2) {}
    if(s1 < s2) {}

    s3.push_back('E');
    std::cout << s3 << std::endl;

    s1 += "tralala";
    std::string s6 = s1 + ", " + s2;
    std::cout << s6 << std::endl;

    std::string s7;
    std::getline(std::cin, s7);
    std::cout << s7 << std::endl;

    std::cout << "std::map - represent Arrays" << std::endl;

    std::map<int, std::string> numbers;

    numbers[0] = "zero";
    numbers[1] = "One";
    numbers[2] = "Two";

    std::cout << numbers.at(0) << std::endl;
    std::cout << numbers.size() << std::endl;
    bool empmap = numbers.empty();

    auto it = numbers.find(1);
    if(it == numbers.end())
        std::cout << "Key not found! " << std::endl << std::endl;
    else
        std::cout << "Key found! Value: " << std::endl << std::endl;

    std::map<int, std::string> Days
    {
        {1, "Monday"},
        {2, "Tuesday"},
        {3, "Wednesday"},
        {4, "Thursday"},
        {5, "Friday"},
        {6, "Saturday"},
        {7, "Sunday"}
    };

    for(int i = 1; i <= 7; ++i)
        std::cout << Days[i] << std::endl;

    std::cout << "std::function - represent Arrays" << std::endl;

    double a = Calculate(TestFun1, 5);
    double b = Calculate(TestFun2, 10);

    std::function<int(int, int)> f = [] (int a, int b) -> int {return a * b;}; //The latter part after "=" is a lambda function.

    int res = f(10, 20);
    std::cout <<  res;


    std::cout << "std::deque - represent lists of lists" << std::endl;
    std::cout << "Elements are not continuous in Memory / RAM" << std::endl; // orgainzed as list of lists

    std::deque<int> dq1 (10);

    std::deque<double> dq2 (5);

    std::deque<int> dq3;

    std::deque<int> dq4 (3, 7);


    for(int i = 0; i < dq4.size(); ++i)
        std::cout << dq4[i] << " ";

    int eldq = dq1.at(0);

    bool emp1dq = dq2.empty();
    bool emp2dq = dq3.empty();

    std::cout << dq3.size() << std::endl;
    dq3.push_back(100);
    std::cout << dq3.size() << " "<< dq3.at(0) << std::endl;

    std::cout << "Let's create an initialized deque" << std::endl;

    std::deque<int> dq5 {5, 4, 3, 2, 1};

    for(int i : dq5)
        std::cout << i << " ";

    dq5.pop_back();
    std::cout << std::endl;

    for(int i : dq5)
        std::cout << i << " ";

    dq5.push_front(100);

    for(int i : dq5)
        std::cout << i << " ";

    std::deque<int> dq6 {5, 4, 3, 2, 1};

    for(int i : dq6)
        std::cout << i << " ";

    dq6.pop_back();
    std::cout << std::endl;

    for(int i : dq6)
        std::cout << i << " ";

    dq6.push_front();

    return 0;
};

double Calculate(std::function<double(double)> f, double x){
    double y = f(x) * f(x) * f(x);
    return y;
}

double TestFun1(double x){
    return x * x;
}

double TestFun2(double x) {
    return x * x - 2 * x + 1;
}
