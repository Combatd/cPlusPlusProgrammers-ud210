//
//  main.cpp
//  UserInputProgramming
//
//  Created by Mark Calvelo on 10/17/20.
//

#include <iostream>
#include <string>

// std::cin will not grab spaces in strings!

int main(int argc, const char * argv[]) {
    int year = 0;
    int age = 0;
    std::string name = " ";
    std::string favoriteFood = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    std::cin >> year;
    
    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    std::cin >> age;
    
    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";
    
    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    
    std::cout<<"What is your favorite food?";
    std::cin>>favoriteFood;
    std::cout<<"That "<<favoriteFood<<" sounds delicious!\n";
    return 0;
}
