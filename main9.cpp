/*
   Name: Michelle_Silva, 5006988436, CS135_1021, Lab 3B
   Description: Prompting the User for Character Values
   Input: Reading Char Variable
   Output: Switch Statement to Print Value
*/

#include <iostream>
#include <iomanip>


using namespace std;

int main() {

    char letter = ' ';

    cout<<"Enter a letter grade"<<endl;

    cout<<"**";

    cin>>letter;
    // Prompts the user to enter a letter grade and reads in a letter grade from the keyboard as a char.

    cout<<endl;

    // Uses a switch statement to output the appropriate range for the grade entered in (2).


    // Range percentage between 0 to 100
    switch (letter)
    {
    case 'A':
    case 'a':
        cout<<"Grade range is 90 - 100"<<endl;
        break;
    case 'B':
    case 'b':
        cout<<"Grade range is 80 - 89.99"<<endl;
        break;
    case 'C':
    case 'c':
        cout<<"Grade range is 70 - 79.99"<<endl;
        break;
    case 'D':
    case 'd':
        cout<<"Grade range is 60 - 69.99"<<endl;
        break;
    case 'F':
    case 'f':
        cout<<"Grade range is 0 - 59.99"<<endl;
        break;
       default:
        cout<<"Error: \'"<<letter<<"\'"<<" is not a valid letter grade"<<endl;
        // If a letter is entered in (2) that is not a valid letter grade an error should be displayed.
    }

    return 0;
}
