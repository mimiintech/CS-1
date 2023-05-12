/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#8B
    Description: practice using basic input/output and making user defined functions
    Input: user/keyboard variables
    Output: display outputting variables
*/

#include <iostream>
#include <iomanip>

using namespace std;
const double pi = 3.141592;
// ****************************************************************
// SECOND FUNCTION
// ****************************************************************
bool checkFailure(double input, double min, double max)
{

    if (cin.fail() || input < min || input > max)
    {
        cout << endl;
        cout << "Error: Invalid radius!\n";
        // ERROR
        cin.clear();
        cin.ignore(100, '\n');
        return false;
    }
    return true;
}
// ***********************************************************
// SECOND FUNCTION
// ************************************************************
double getDoubleInput(string prompt, double min, double max) {
    double userInput = 0.0;
    // bool flag = true;
    // bool flag = false;
    do
    {

        // Use prompt as a prompt to the user
        cout << prompt;
        cout << "**";
        // Int input from the user
        cin >> userInput;
        // if (cin.fail() || userInput <= min || userInput > max)
        // {
        //     cout << endl;
        //     cout << "Error: Invalid radius!\n";
        //     // ERROR
        //     cin.clear();
        //     cin.ignore(100, '\n');
        //     flag = true;
        // }
        // else
        // {
        //     flag = false;
        // }

    } while (!checkFailure(userInput, min, max));

return userInput;

}
    
    // while (flag)
    // {
    //     // Use prompt as a prompt to the user
    //     cout << prompt;
    //     cout << "**";
    //     // Int input from the user
    //     cin >> userInput;
//         if (cin.fail() || userInput <= min || userInput > max)
//         {
//             cout << endl;
//             cout << "Error: Invalid radius!\n";
//             // ERROR
//             cin.clear();
//             cin.ignore(100, '\n');
//             flag = true;
//         }
//         else
//         {
//             flag = false;
//         }
//     }
//     return userInput;
// }

// ****************************************************************
// THIRD FUNCTION
// ****************************************************************
double circumference(double radius) {
    double circumference = 0.0;
    circumference = 2 * pi * radius;
    return circumference;
}
// ****************************************************************
// FOURTH FUNCTION
// ****************************************************************
double area(double radius) {
    double area = 0.0;
    area = pi * radius * radius;
    return area;
}
// ****************************************************************
// MAIN FUNCTION
// ****************************************************************
int main() {
    // Minimums/maximums
    // const double MIN = 0.5;
    // const double MAX = 20.5;
    const double MIN = 0.500000;
    const double MAX = 20.500000;
    string prompt1 = "Enter a circle radius between 0.500000 and 20.500000\n";
    double finalRadius = getDoubleInput(prompt1, MIN, MAX);
    double finalCircum = circumference(finalRadius);
    double finalArea = area(finalRadius);
    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Radius: " << finalRadius << endl;
    cout << "Circumference: " << finalCircum << endl;
    cout << "Area: " << finalArea << endl;
    return 0;


// TO FIX:
// 20.5
}