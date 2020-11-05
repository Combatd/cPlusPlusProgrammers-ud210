//
//  main.cpp
//  FiveNumbersInput
//
//  Created by Mark Calvelo on 11/5/20.
//

/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>

int main() {
    float num1, num2, num3, num4, num5;
    float input;
    char operation; // pass into a switch case
    float answer; // based on the operation
    float average;
    
    std::cout << "Enter five numbers:\n";
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;
    std::cin >> num4;
    std::cin >> num5;
    std::cout << "Enter the operation '+','-','*','/':\n";
    std::cin >> operation;
       
       switch (operation) {
           case '+': {
               answer = num1 + num2 + num3 + num4 + num5;
               break;
           } case '-': {
               answer = num1 - num2 - num3 - num4 - num5;
               break;
           } case '*': {
               answer = num1 * num2 * num3 * num4 * num5;
               break;
           } case '/': {
               answer = num1 * num2 * num3 * num4 * num5;
               break;
           }
               
           default: // if none of the above conditions are met
               std::cout << "Invalid Arithmetic Operation!";
       }
    
    average = (num1 + num2 + num3 + num4 + num5) / 5;
    std::cout << "Answer: " << answer << "\n";
    std::cout << "Average: " << average << std::endl;
    return 0;
}
