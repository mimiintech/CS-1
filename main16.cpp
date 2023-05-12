/*
    Name: Michelle_Silva, 5006988436, CS135_1021, LAB#5A
    Description: do-while, for-loop, while-loop
    Input: user input 2-20
    Output: upside down triangle, right triangle
*/

#include <iostream>
using namespace std;


int main() {

    // Do While Loop for User Input
    int count = 0;
    bool flag = false;

    // Prompt user for input between 2 and 20
    do {
        cout << "Enter a count between 2 and 20" << endl;
        cout << "**";
        cin >> count;
        cout << endl;

        if (cin.fail() || count < 2 || count > 20)
        // numbers between
        {
            // cout << endl;
            cout << "Error: Invalid entry, please retry\n";
            // error message
            flag = true;
            cin.clear();
            cin.ignore(100, '\n');
            // clearing the case
        }
        else
        {
            flag = false;
        }

    } while (flag);

    // For Loop for first triangle output
    // Star Patterns
    // Upside down triangle
    for (int amountOfStars = count; amountOfStars >= 1; amountOfStars--)
    {
        for (int starsAgain = 1; starsAgain <= amountOfStars; starsAgain++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // While Loop for second triangle output
    // Star Patterns
    // Right triangle

    int amountOfStars = 1;
    while (amountOfStars <= count)
    {
        int numberOfStars = 1;
        // shows the number of stars
        while (numberOfStars <= amountOfStars)
        {cout << "*"; numberOfStars++;}
        amountOfStars++;
        cout << endl;
        // next line
    }

    return 0;
}