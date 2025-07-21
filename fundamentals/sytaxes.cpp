#include <iostream>
using namespace std;       //we can use std::functin instead using a library like that

int main(){
    string firstName = "Alma ";
    string lastName = "Negra";
    string fullName = firstName + lastName + "\n";
    cout << fullName;       //We can use + to concatenate or append(), strings are objects so we can use functions on it.

    cout << "The full name lenght is: " << fullName.length();  //or size()
    //We can parse through a string using index using square brackets []
    
    cout << fullName[0];  //Returns a "A"

    string power = "Marreta Biônica";
    cout << power[power.size() - 1];      //returns the last letter of the string.
    
    //in C++ strings are MUTABLE and we can change a value in a especified index.

    power[0] = 'C';  //using single quotes

    cout << power;
    //We can store strings on cin but its consider a space as an ending, for that:
    string weakness;
    getline(cin, weakness);         //getline get all the line considering blankspaces.
    cout << "Your weakness is: " << weakness;
    return 0;
}