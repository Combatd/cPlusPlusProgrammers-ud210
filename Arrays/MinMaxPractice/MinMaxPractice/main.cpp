//
//  main.cpp
//  MinMaxPractice
//
//  Created by Mark Calvelo on 11/6/20.
//

/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>

int main() {
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;
    
    // we have 15 integers, so the loop runs from 0 to 14
    for (int i = 0; i < 15; i++) {
        std::cout << "Enter an integer: ";
        std::cin >> userInput;
        std::cout << "User entered integer " << userInput << "\n";
        // enforce minNumber and maxNumber
        if (userInput > maxNumber) {
            maxNumber = userInput;
        }
        
        if (userInput < minNumber) {
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    std::cout << "The Max Number = " << maxNumber << "\n";
    std::cout << "The Min Number = " << minNumber << "\n";
    average = sumTotal / 15.0; // average of 15 numbers
    std::cout << "The average is " << average << "\n";
    
    return 0;
}
