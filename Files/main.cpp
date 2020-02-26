#include <iostream>
#include <fstream>
#include <string>


/*
std::ofstream file(path_to_file) // write to a file
    f << something;

*/

int main() {
    std::string s;
    std::cout << "Enter some text: ";
    std::getline(std::cin, s);

    int n;

    std::cout << "Enter number n: ";
    std::cin >> n;

    std::ofstream f("test.txt");

    for(int i = 1; i<=n; ++i)
        f << s << std::endl;

    f.close();

}
