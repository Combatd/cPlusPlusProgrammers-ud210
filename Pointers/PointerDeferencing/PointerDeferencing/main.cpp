//
//  main.cpp
//  PointerDeferencing
//
//  Created by Mark Calvelo on 11/5/20.
//
/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/

#include <iostream>
#include <string>

int main() {
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    std::string valueMessage = "The value of the variable is: ";
    std::string pointerMessage = "The pointer has address of: ";
    
    std::cout << "Enter an Integer: \n";
    std::cin >> givenInt;
    std::cout << "Enter a Float: \n";
    std::cin >> givenFloat;
    std::cout << "Enter a Double \n";
    std::cin >> givenDouble;
    std::cin.ignore(); // ignore the characters in the buffer leftover of givenDouble
    std::cout << "Enter a String: \n"; // class string, not c string
    std::cin >> givenString;
    std::cout << "Enter a Character"; // one character
    std::cin >> givenChar;
    
    std::cout << valueMessage << givenInt << std::endl;
    std::cout << pointerMessage << &givenInt << std::endl;
    std::cout << valueMessage << givenFloat << std::endl;
    std::cout << pointerMessage << &givenFloat << std::endl;
    std::cout << valueMessage << givenDouble << std::endl;
    std::cout << pointerMessage << &givenDouble << std::endl;
    std::cout << valueMessage << givenString << std::endl;
    std::cout << pointerMessage << &givenString << std::endl;
    std::cout << valueMessage << givenChar << std::endl;
    std::cout << pointerMessage << &givenChar << std::endl;
    
    return 0;
}
