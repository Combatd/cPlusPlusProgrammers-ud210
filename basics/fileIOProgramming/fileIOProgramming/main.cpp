//
//  main.cpp
//  fileIOProgramming
//
//  Created by Mark Calvelo on 10/16/20.
//

/*
 Our program reads and writes to this input.txt. You can look at this file, you will see it has text
 in it. Our program will first write to this file, then read from it. Normally, if a program writes
 to a file we can open that file and see the added text in the file. We can’t do that for input.txt.
 We won’t see the added text in the file.

 But we know it is writing to the file because we can see it being read by the program. We can also
 change input.txt and we will see the program reading the new text.
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ofstream myfileI ("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI << "Time to add this new line here! \n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";
  
    //create an input stream to write to the file
    ifstream myfileO ("input.txt");
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }
    
    else cout << "Unable to open file for reading";
    
    return 0;
}
