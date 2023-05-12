/*
   Name: Michelle_Silva, 5006988436, CS135_1021, Lab#4A
   Description:  Practice Prompting the User for Integers
   Input: Three Integer Types
   Output: Printing with While Loop
*/

#include <iostream>

using namespace std;

int main() {

    int startingNumber = 0;

    int endingNumber = 0;
    
    int increment = 0;

    // Prompts the User 
    cout << "Enter a starting number\n";
    cout << "**";
    // Enters the Integer
    cin >> startingNumber;

    // If-user input fails,
    // then invalid
    if (cin.fail()) {
            cout << endl;
            cout << "Error: invalid entry.\n";
            return 0;
            // program exit
        }
    cout << endl;

    // Prompts the User
    cout << "Enter an ending number\n";
    cout << "**";
    // Enters the Integer
    cin >> endingNumber;

    // If-user input fails,
    // then invalid
    if (cin.fail())
    {
            cout << endl;
            cout << "Error: invalid entry.\n";
            return 0;
            // program exit
    }
    cout << endl;

    // If-user input fails,
    // then invalid
    if (startingNumber > endingNumber)
    {
            cout << "Error: end must be greater than start." << endl;
            return 0;
            // program exit
    }

    // Prompts the User
    cout << "Enter a value to increment by\n";
    cout << "**";
    // Enters the Integer
    cin >> increment;

    // If-user input fails,
    // then invalid
    if (cin.fail())
    {
            cout << endl;
            cout << "Error: invalid entry.\n";
            return 0;
    }

    cout << endl;

    // The first number is less than 
    // or equal to the last number
    for (;startingNumber <= endingNumber; startingNumber += increment)
    // the first number is set 
    // and equal to the increment value
    { cout << startingNumber << " "; } 
    // quot. marks create space
    // prints the first number
    cout << endl;

    return 0;
}


