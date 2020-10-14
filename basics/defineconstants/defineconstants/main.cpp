//
//  main.cpp
//  defineconstants
//
//  Created by Mark Calvelo on 10/14/20.
//
// Goal: use constant variables

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const int weightGoal = 100;
    const int newWeightGoal = 200;
    const string unchangableString = "Hello World!";
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    cout<<"newWeightGoal = "<<newWeightGoal<<"\n";
    cout<<"The following string is from a constant: "<<unchangableString<<endl;
    return 0;
}
