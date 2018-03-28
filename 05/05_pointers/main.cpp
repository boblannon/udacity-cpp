/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>
#include<sstream>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;

    std::cin >> givenInt;
    std::cin >> givenFloat;
    std::cin >> givenDouble;
    std::cin.ignore();
    std::cin >> givenChar;
    std::cin.ignore();
    std::getline(std::cin, givenString);

    char * pointerToGivenChar = &givenChar;

    std::cout << "givenInt is " << givenInt << "\n";
    std::cout << "givenInt is stored at " << &givenInt << "\n";

    std::cout << "givenFloat is " << givenFloat << "\n";
    std::cout << "givenFloat is stored at " << &givenFloat << "\n";

    std::cout << "givenDouble is " << givenDouble << "\n";
    std::cout << "givenDouble is stored at " << &givenDouble << "\n";

    std::cout << "givenString is " << givenString << "\n";
    std::cout << "givenString is stored at " << &givenString << "\n";

    std::cout << "givenChar is " << givenChar << "\n";
    std::cout << "givenChar is stored at " << &pointerToGivenChar << "\n";

    return 0;
}

