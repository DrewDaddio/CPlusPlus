#include <iostream>
#include <string>

int main() {
    bool A = true,
            B = true,
            C = false,
            D = true; //Boolean: True/false

    bool and1 = A && B; //&&: and
    bool and2 = A && B && C && D; //and2: false

    bool or1 = C || D; //|| = or
    bool or2 = A || B|| C || D; //or2: true; only one variable needs to be true.

    bool and_or1 = A && B || C;
    bool and_or2 = C || A && B && C && D; //and_or2: false; C || (A && B && C && D)

    bool n1 = !A;// !: not operator; n1 = false
    bool n2 = !C;// n2 = true
    bool n3 = A && !C && D; //n3 = true
    bool n4 = !A || !B || !C || !D; //n4 = true
}
