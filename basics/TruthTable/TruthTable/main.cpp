//
//  main.cpp
//  TruthTable
//
//  Created by Mark Calvelo on 10/30/20.
//

/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/

#include <iostream>

void PrintTruthTable(int A, int B, int C);

int main() {
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    int A, B, C = 0; // optionally chained variable declaration
    
    
    //Use this output format
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n"; // let us print out the top of the table first
    return 0;
}

void PrintTruthTable(int A, int B, int C) {
    int Q = (A && B && C) || (A && (!B || !C)); // the condition is an expression involving A B C to get a boolean
    std::cout <<A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B||!C) << "\t\t" << (A&&(!B||!C)) << "\t\t" << Q << "\n";
}
