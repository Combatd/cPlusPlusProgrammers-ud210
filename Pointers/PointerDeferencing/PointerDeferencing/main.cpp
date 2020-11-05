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
    double givenDouble ;
    std::string givenString;
    char givenChar;
    
    std::cout << "Enter an Integer: \n";
    std::cin >> givenInt;
    std::cout << "Enter a Float: \n";
    std::cin >> givenFloat;
    std::cout << "Enter a Double \n";
    std::cin >> givenDouble;
    std::cout << "Enter a String: \n"; // class string, not c string
    std::cin >> givenString;
    std::cout << "Enter a Character"; // one character
    std::cin >> givenChar;
    
    return 0;
}
