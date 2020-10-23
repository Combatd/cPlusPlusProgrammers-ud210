//
//  main.cpp
//  StringStreamRoom
//
//  Created by Mark Calvelo on 10/22/20.
//

/*Goal: practice using stringstream
 Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

#include <iostream>
#include <string>
#include <sstream>

int main(int argc, const char * argv[]) {
    std::string stringLength;
    std::string stringWidth;
    double roomLength = 0;
    double roomWidth = 0;
    
    std::cout << "Enter the Length: ";
    std::getline(std::cin, stringLength);
    std::stringstream(stringLength) >> roomLength;
    std::cout << "The room length is " << roomLength << std::endl;
    std::cout << "Enter the Width: ";
    std::getline(std::cin, stringWidth);
    std::stringstream(stringWidth) >> roomWidth;
    std::cout << "The room width is " << roomWidth << std::endl;
    
    double roomArea = roomLength * roomWidth;
    
    std::cout << "The area is " << roomArea << "\n";
    
    return 0;
}
