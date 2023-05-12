/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#1B
    Description: Practice Reading Input/Output Datatypes
    Input: user/keyboard variables
    Output: display outputting variables
*/

#include <iostream>

using namespace std;

int main()
{

    long long int value1 = 0;

    long long int value2 = 0;

    long long int sum = 0;

    long long int sub = 0;

    long long int mul = 0;

    long long int div = 0;
    
    long long int mod = 0;

    double value3 = 0.0;
    
    double value4 = 0.0;
    
    double div_dec = 0.0;
    // Holds Decimal Values

    // Prompts the user to enter an integer and reads in an integer number from the keyboard.
    cout << "Enter an integer" << endl;
    // Output

    cout << "**";

    cin >> value1;
    // Input

    // Prompts the user to enter a second integer and reads in a second integer number from the keyboard.
    cout << endl;


    cout << "Enter another integer" << endl;
    // Output

    cout << "**";

    cin >> value2;
    // Input

    // Adds the integer from (1) to the integer from (2).

    cout << endl;

    sum = value1 + value2;

    cout << value1 << " + " << value2 << " = " << sum << '\n';

    // Subtracts the integer from (2) from the integer from (1).


    sub = value1 - value2;

    cout << value1 << " - " << value2 << " = " << sub << '\n';

    // Multiplies the integer from (1) to the integer from (2).

    mul = value1 * value2;

    cout << value1 << " * " << value2 << " = " << mul << '\n';

    //  Divides the integer from (1) by the integer from (2).

    div = value1 / value2;

    cout << value1 << " / " << value2 << " = " << div << '\n';

    // Modulus the integer from (1) by the integer from (2).

    mod = value1 % value2;

    cout << value1 << " % " << value2 << " = " << mod << '\n';

    // Prompts the user to enter a double and reads in a double number from the keyboard.

    cout << endl;

    cout << "Enter a double" << endl;

    cout << "**";

    cin >> value3;
    // Input double

    // Prompts the user to enter a second double and reads in a second double number from the keyboard.

    cout << endl;

    cout << "Enter another double" << endl;

    cout << "**";

    // Input double

    cin >> value4;

    // Divides the double from (8) by the double from (9).

    div_dec = value3 / value4;

    cout << endl;

    // Writes the answers from (3) - (7) and (10) out to the display.
    cout << value3 << " / " << value4 << " = " << div_dec << endl;

    return 0;
}