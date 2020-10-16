//
//  main.cpp
//  FormattingOutput
//
//  Created by Mark Calvelo on 10/15/20.
//

/*Formatting Output
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
 
 std::cout<<"\n\nThe text without any formating\n";
 std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
 std::cout<<"\nThe text with setw(15)\n";
 std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
 std::cout<<"\n\nThe text with tabs\n";
 std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
 
 The text without any formating
 IntsFloatsDoubles

 The text with setw(15)
 Ints         Floats        Doubles


 The text with tabs
 Ints    Floats    Doubles
*/

#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    
    std::cout << "set width will be 10"<<std::endl;
    // Create 3 labeled columns
    std::cout << "Ints" << std::setw(10);
    std::cout << "Floats" << std::setw(10);
    std::cout << "Doubles" << std::setw(10);
    
    std::cout << a;
    std::cout << std::setw(12);
    std::cout << std::setw(10) << c << "\n";
    
    std::cout << aa; // 2 * a
    std::cout << std::setw(12) << bb;
    std::cout << std::setw(10) << cc << "\n";
    
    std::cout << aaa; // 3 * a
    std::cout << std::setw(12) << bbb;
    std::cout << std::setw(10) << ccc << "\n\n"; // 2 new lines for printing with tabs
    
    std::cout << "print with tabs" << std::endl;
    std::cout << "Int" << "\tFloats" << "\tDoubles\n";
    std::cout << aaa << "\t" << bbb << "\t" << ccc << "\n";
    
    return 0;
}
