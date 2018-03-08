/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string address;
    std::string phoneNumber;
    std::cout<<"Tell me your name: ";
    std::getline(std::cin, name);
    std::cout<<"Hello "<< name <<", where you at?\n";
    std::getline(std::cin, address);
    std::cout<<"Cool, cool. Can I get those digits?\n";
    std::getline(std::cin, phoneNumber);

    // Had to add this because input.txt had two users
    std::string name2;
    std::string address2;
    std::string phoneNumber2;
    std::cout<<"Tell me your name: ";
    std::getline(std::cin, name2);
    std::cout<<"Hello "<< name2 <<", where you at?\n";
    std::getline(std::cin, address2);
    std::cout<<"Cool, cool. Can I get those digits?\n";
    std::getline(std::cin, phoneNumber2);

    std::cout<< name << "\n\t\t" << address << "\n\t\t" << phoneNumber << "\n";
    std::cout<< name2 << "\n\t\t" << address2 << "\n\t\t" << phoneNumber2 << "\n";
    return 0;
}
