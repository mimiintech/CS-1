/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#9A
    Description: practice using basic input/output and making user defined functions
    Input: user/keyboard variables
    Output: display outputting variables
*/

#include <iostream>
#include <iomanip>

using namespace std;
const double MIN = 0.500000;
const double MAX = 20.500000;
// **************************************************************
bool checkFailure(double input, double min, double max)
{

    if (cin.fail() || input < min || input > max)
    {
        cout << endl;
        cout << "Error: Invalid input!\n";
        // ERROR
        cin.clear();
        cin.ignore(100, '\n');
        return false;
    }
    return true;
}
// **************************************************************
double getDoubleInput(string prompt, double min, double max)
{
    double userInput = 0.0;
    do
    {   
        cout << prompt << endl;
        cout << "**";
        // cout << endl;
        cin >> userInput;
    } while (!checkFailure(userInput, min, max));

    return userInput;
}
// **********************************************************
void getDoubleInputs(double &input1, double &input2) {
    // string prompt1 = "Enter double between 0.500000 and 20.500000";
    // cout << endl;
    // string prompt2 = "\nEnter another double between 0.500000 and 20.500000";
    input1 = getDoubleInput("Enter double between 0.500000 and 20.500000", MIN, MAX);
    // Calls the function
    cout << endl;
    input2 = getDoubleInput("Enter another double between 0.500000 and 20.500000", MIN, MAX);
    // Calls the function
}
// **********************************************************
    void addSubtract(double &num1, double &num2)
{
    // num1 = num1 + num2;
    // // Add num1 and num2
    // num2 = num2 - num1;
    // Subtract num2 from num1
    double resultOne = num1 + num2;
    cout << fixed << setprecision(2);
    cout << endl;
    cout << num1 << " + " << num2 << " = " << resultOne << endl;

    double result = num1 - num2;
    cout << fixed << setprecision(2);
    cout << num1 << " - " << num2 << " = " << result << endl;
}

// *********************************************************
    void multiplyDivide(double &num1, double &num2)
{
    // num1 = num1 * num2;
    // Multiply num1 and num2
    double resultOne = num1 * num2;
    cout << fixed << setprecision(2);
    cout << num1 << " * " << num2 << " = " << resultOne << endl;

    // num2 = num1 / num2;
    // // Divide num1 by num2

    double result = num1 / num2;
    cout << fixed << setprecision(2);
    cout << num1 << " / " << num2 << " = " << result << endl;
}

// MIN, MAX, PRINT
int main() {
    double input1 = 0.0;
    double input2 = 0.0;
    // CALLING
    getDoubleInputs(input1, input2);
    addSubtract(input1, input2);
    multiplyDivide(input1, input2);
    // cout << fixed << setprecision(2);
    // cout << endl;
    return 0;
}
