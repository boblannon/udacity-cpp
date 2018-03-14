/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include<iostream>


int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q

    //Use this output format
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
    int a = 0;
    int b = 0;
    int c = 0;
    int Q = 0;



    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";

    a = 0;
    b = 0;
    c = 1;
    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";

    a = 0;
    b = 1;
    c = 0;
    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";

    a = 0;
    b = 1;
    c = 1;
    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";

    a = 1;
    b = 0;
    c = 0;
    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";

    a = 1;
    b = 0;
    c = 1;
    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";

    a = 1;
    b = 1;
    c = 0;
    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";


    a = 1;
    b = 1;
    c = 1;
    Q = (a && b && c) || (a && (!b || !c));
    std::cout << a << "\t" << b << "\t" << c << "\t\t" << (a && b && c) << "\t\t" << (!b||!c) << "\t\t" << (a && (!b||!c)) << "\t\t" << Q << "\n";


    return 0;
}
