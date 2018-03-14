/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main(){
    int number;
    int total = 0;
    float average;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Gimme a number!\n";
        std::cin >> number;

        total += number;
    }

    average = total / 5.0;
    std::cout << "Total is: " << total << "\n";
    std::cout << "Average is: " << average << "\n";

    return 0;
}

