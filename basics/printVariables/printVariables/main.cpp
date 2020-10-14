//
//  main.cpp
//  printVariables
//
//  Created by Mark Calvelo on 10/14/20.
//

/*
 sizeof(variable type) ie: sizeof(int)
 
 cout<<"int size = "<<sizeof(int)<<"\n";
 
 cout<<"int size = "<<sizeof(int)<<endl;
 
 *GOAL: Practice writing to the console and learn
 **the variables types available in C++
 **Print the sizes of each variable to the console.
 **Print them in the following order:
 **int, short, long, char, float, double, bool
 **
 **Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

using namespace::std;

int main(int argc, const char * argv[]) {
    cout << "int size = "<<sizeof(int)<<"\n";
    cout<<"short size = "<<sizeof(short)<<endl;
    cout<<"long size = "<<sizeof(long)<<"\n";
    cout<<"char size = "<<sizeof(char)<<endl;
    cout<<"float size = "<<sizeof(float)<<"\n";
    cout<<"double size = "<<sizeof(double)<<endl;
    cout<<"bool size = "<<sizeof(bool)<<"\n";
    return 0; // exit code
}
