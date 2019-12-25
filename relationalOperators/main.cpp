#include <iostream>

int main() {
    std::cout << "<: Greater than" << std::endl;
    std::cout << "<=: Greater than or equal to" << std::endl;
    std::cout << "==: Equals" << std::endl;
    std::cout << "!=: Not equal to" << std::endl;
    std::cout << ">=: Less than or equal to" << std::endl;
    std::cout << ">: Less than" << std::endl;

    int x = 10, y = 5, z = 15, w = 10;

    bool rel1 = x > y; //rel1 = true
    bool rel2 = y > x; //rel2 = false

    bool rel3 = x == z; //rel3 = false
    bool rel4 = x != z; //rel4 = true

    bool rel5 = x >= w; //rel5 = true
    bool rel6 = !(x > w);//rel6 = true

    bool rel7 = 12 > x > 7;//rel7 = false; This is read left to right but it will read (12 > x) first. Then it will process (true > 7) which will return false
    bool rel8 = 12 > x && x > 7;//rel8 = true; This is the proper way to write the operators from the above variable 'rel7'
    std::cout << rel1 << rel2 << rel3 << rel4 << rel5 << rel6 << rel7 << rel8 << std::endl;

    //Comma Operator
    int a = 2, b = 3;

    if(a > 4, b > 1) //This will read left to right but only reads the last item evaludated. The 1st item (a > 4) is false but the comma negated that
        std::cout << "ipsum lorem..." << std::endl;

    //correct way to use the comma:
    if(a > 4 && b > 1) //This will read left to right but only reads the last item evaludated. The 1st item (a > 4) is false but the comma negated that
        std::cout << "ipsum lorem..." << std::endl;


}

//relational operators defined the  relationship between to operators
