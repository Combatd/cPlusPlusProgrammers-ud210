//
//  main.cpp
//  enumeratedConstants
//
//  Created by Mark Calvelo on 10/14/20.
//

/*
 C++ also allows for enumerated constants.
 The programmer can create a new variable type and then assign a finite number of values to it.
 
 Enumerated types are types that are defined with a set of custom identifiers, known as enumerators, as possible values.
 Objects of these enumerated types can take any of these enumerators as value.
 
 enum type_name {
   value1,
   value2,
   value3,
   .
   .
 } object_names;

 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just
    //like any other variable
    if(bestMonth == Jan) {
        cout<<"I'm not so sure January is the best month\n";
    } else if (bestMonth == Dec) {
        cout<<"I guess you love the Happy Holidays!"<<endl;
    }
    return 0;
}
