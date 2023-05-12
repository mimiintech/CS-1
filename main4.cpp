/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#2A
    Description: Practice Degrees to Radians
    Input: reading values as doubles from the user/keyboard into variables
    Output: converted value from degrees to radians
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.141592;

int main()
{
    double degrees = 0.0;
    // Holds Decimal Values

    // Prompts the user to enter an integer and reads in an integer number from the keyboard.
    cout << "Enter an angle value, in degrees" << endl;
    // Output

    cout << "**";

    cin >> degrees;
    // Input

    // Next line
    cout << endl;

    // 	// convert degrees to radians
    double radians = degrees * pi / 180;
    cout << degrees << " degrees" << " = " << radians << " radians" << endl;

    // sine conversion
    cout << "sin(" << degrees << ") = " << sin(radians) << endl;

    // cosine conversion
    cout << "cos(" << degrees << ") = " << cos(radians) << endl;

    // tangent conversion
    cout << "tan(" << degrees << ") = " << tan(radians) << endl;

    return 0;
}