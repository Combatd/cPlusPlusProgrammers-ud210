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

void PrintTruthTable(int A, int B, int C, int Q);


int main() {
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    int A = 0;
    int B = 0;
    int C = 0;
    int Q = (A && B && C) || (A && (!B || !C));
    
    // Use this output format
    // std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";
    
    PrintTruthTable(A, B, C, Q);
    
    C = 1;
    PrintTruthTable(A, B, C, Q);
    
    C = 0;
    B = 1;
    PrintTruthTable(A, B, C, Q);
    
    C = 1;
    B = 1;
    PrintTruthTable(A, B, C, Q);
    
    C = 0;
    B = 0;
    A = 1;
    PrintTruthTable(A, B, C, Q);

    C = 1;
    B = 0;
    A = 1;
    PrintTruthTable(A, B, C, Q);
    
    return 0;
}

void PrintTruthTable(int A, int B, int C, int Q) {
    Q = (A && B && C) || (A && (!B || !C)); // the condition is an expression involving A B C to get a boolean
    std::cout <<A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B||!C) << "\t\t" << (A&&(!B||!C)) << "\t\t" << Q << "\n";
}
