/*
   Name: Michelle_Silva, 5006988436, CS135_1021, Lab 3A
   Description: If-Else Statements to Compare Values
   Input: Entering floating point numbers
   Output: Comparing the values
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    string largestString = " ";

    string userInput = " ";

    string userSecondInput = " ";
    // String User Input Values

    double largest = 0.0;

    double user = 0.0;

    double userTwo = 0.0;
// Double User Input Values

    cout << "Enter a floating point number" << endl;

    cout << "**";

    cin >> user;
    // User Input

    cout << endl;

    cout << "Enter another floating point number" << endl;

    cout << "**";

    cin >> userTwo;
    // User Input

    cout << endl;

    cout << "You entered " << user << " and " << userTwo << endl;
    // Printing both values


    if (user >= userTwo) {
        largest = user;
        cout << "The largest is " << largest << endl;

    }
    else if (userTwo >= user) {
        largest = userTwo;
        cout << "The largest is " << largest << endl;
    }
    // Comparing both values of user input

    cout << endl;
    
    cout << "Enter a string" << endl;

    cout << "**";

    cin >> userInput;
    // User Input

    cout << endl;

    cout << "Enter a second string" << endl;

    cout << "**";

    cin >> userSecondInput;
    // User Input

    cout << endl;

    cout << "You entered \"" << userInput << "\""
         << " and \"" << userSecondInput << "\"" << endl;
    // Printing both values

    if (userInput >= userSecondInput)
    {
        largestString = userInput;
        cout << "The largest is \"" << largestString << "\"" << endl;
    }

    else if (userSecondInput >= userInput) {
        largestString = userSecondInput;
        cout << "The largest is \"" << largestString << "\""  << endl;
    }
    // Comparing both values of user input

    return 0;

} 