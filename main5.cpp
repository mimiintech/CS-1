/*
   Name: Michelle_Silva, 5006988436, CS135_1021, SP-23
   Description: convert from pints to gallons
   Input: the number of pints
   Output: gallons and the cost
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double pints = 0.0;

    double gallons = 0.0;

    double price = 0.0;

    cout<<"How many pints of milk would you like? ";
    // Ask the user

    cin>>pints;
    // Recieves the number

    gallons = pints / 8;
    // Conversion from pints to gallons

    cout<<endl;
    // Creates a space

    cout<<"There are "<<gallons<<" gallons in "<<pints<<" pints."<< endl;
    // Prints the gallons and the pints

    price = gallons * 4.44;
    // Converts gallons to get cost

    cout<<"The "<<gallons<<" gallons will cost $"<<price<<".";
    // Prints the gallons and the final cost
}