#include <iostream>        //Header of line: IOstream let us to use input/output objects like cout.
using namespace std;       //Means that we can use names for objects and variables from the std library.

int main() {                  //int main(){} is a function, cout is a object (see-out), << is *include* symbol to output/print text cout is like print
    cout << "Hello World! \n";           //or use: << "\n"

    int Num = 15;
    cout << Num << "\n";

    string Myname;           //We can declare a variable without assigning a value and assign later
    Myname = "Melinda";
    cout << Myname;

    char Letter = 'B';
    
    double Money = 5.6;     //We can declare MULTIVARIABLES using comma to separate
    int a = 10, b = 15, c = 12;  // or, int x,y,z; x=y=z=15 for multivariables that assign the same value

    bool resultProff = true;       
     //concatenate text and variables using cout enad <<*/

     cout << "\n My name is " << Myname << " and i have: " << Money << " in my wallet\n\n";
    
    double sum = Num + Money;

    cout << sum << "\n";
//------------------------------------------------------------------------------------

    const int Age = 49;
    //Age = 32;  //This return a ERROR, const variable CANNOT be changed
    int x;
    cout << "Type a number: ";
    cin >> x;                  //cin is a PREDEFINED VARIABLE that extract data inputed by the user using >>.
    cout << "The square of the number is: " << x*x;

    return 0;
}



