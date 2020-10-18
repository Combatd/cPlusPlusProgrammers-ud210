//
//  main.cpp
//  CinStrings
//
//  Created by Mark Calvelo on 10/17/20.
//

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

int main(int argc, const char * argv[]) {
    // first and second user variables
    std::string name1, address1, phoneNum1;
    std::string name2, address2, phoneNum2;
    
    // User1 input
    std::cout <<"User1 - What is your name?\n";
    std::getline(std::cin, name1);
    std::cout <<"User1 - What is your address?\n";
    std::getline(std::cin, address1);
    std::cout <<"User1 - What is your phone number?";
    std::getline(std::cin, phoneNum1);
    
    // User 2 input
    std::cout <<"User2 - What is your name?\n";
    std::getline(std::cin, name2);
    std::cout <<"User2 - What is your address?\n";
    std::getline(std::cin, address2);
    std::cout <<"User2 - What is your phone number?";
    std::getline(std::cin, phoneNum2);
    
    // Print out all the information
    std::cout << name1 << "\n";
    std::cout << "\t\t" << address1 << "\n";
    std::cout << "\t\t" << phoneNum1 << "\n";
    
    std::cout << name2 << "\n";
    std::cout << "\t\t" << address2 << "\n";
    std::cout << "\t\t" << phoneNum2 << "\n";
    
    return 0;
}
