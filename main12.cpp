/*
   Name: Michelle_Silva, 5006988436, CS135_1021, SP23-Assign 3
   Description: switch and if/else statements, input failure
   Input: display user menu
   Output: user select an option
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

char choice = ' ';
// declare & initialize new variables
double x1 = 0.0;
double x2 = 0.0;
double y1 = 0.0;
double y2 = 0.0;
// declare & initialize new variables
double slope = 0.0;
double xdistance = 0.0;
double ydistance = 0.0;
// declare & initialize new variables
double manDist_One = 0.0;
double manDist_Two = 0.0;
double totalManDist = 0.0;
double eucDist_One = 0.0;
double eucDist_Two = 0.0;
double totalEucDist = 0.0;
double eucTotal = 0.0;
// declare & initialize new variables

cout << "Select an option:" << endl;
cout << "(S/s)lope" << endl;
cout << "(X/x)-Axis Distance" << endl;
cout << "(Y/y)-Axis Distance" << endl;
cout << "(M/m)anhattan Distance" << endl;
cout << "(E/e)uclidean Distance" << endl;
cout << "(Q/q)uit" << endl;
cout << endl;
cout << "Selection: ";
// print user menu 
cin >> choice;
// users option

switch (choice)
// takes in the user' option
{
case 'S':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure 

    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    slope = (y2 - y1) / (x2 - x1);
    // formula

    cout << endl;
    cout << "Slope: " << slope << endl;
    break;
case 's':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    slope = (y2 - y1) / (x2 - x1);
    // formula

    cout << endl;
    cout << "Slope: " << slope << endl;
    break;
case 'X':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    xdistance = abs(x2 - x1);
    // formula

    cout << endl;
    cout << "X-Axis Distance: " << xdistance << endl;
    break;
case 'x':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    xdistance = abs(x2 - x1);
    // formula

    cout << endl;
    cout << "X-Axis Distance: " << xdistance << endl;
    break;
case 'Y':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure

    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    ydistance = abs(y2 - y1);
// formula
    cout << endl;
    cout << "Y-Axis Distance: " << ydistance << endl;
    break;
case 'y':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    ydistance = abs(y2 - y1);
// formula
    cout << endl;
    cout << "Y-Axis Distance: " << ydistance << endl;
    break;
case 'M':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    manDist_One = abs(x2 - x1);
// formula
    manDist_Two = abs(y2 - y1);
    // Finds the difference

    totalManDist = manDist_One + manDist_Two;
    // Takes the last two equations with the albsolute value

    // |x^2 - x^1 | + |y^2 - y^1|;

    cout << endl;
    cout << "Manhattan Distance: " << totalManDist << endl;
    break;
case 'm':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a x2 value: ";
    cin >> x2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y2 value: ";
    cin >> y2;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    manDist_One = abs(x2 - x1);
// formula
    manDist_Two = abs(y2 - y1);
    // Finds the difference

    totalManDist = manDist_One + manDist_Two;
    // Takes the last two equations with the albsolute value

    // |x^2 - x^1 | + |y^2 - y^1|;

    cout << endl;
    cout << "Manhattan Distance: " << totalManDist << endl;
    break;
case 'E':
    cout << "Enter a x1 value: ";
    cin >> x1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y1 value: ";
    cin >> y1;

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a x2 value: ";
    cin >> x2;
    // users option

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y2 value: ";
    cin >> y2;
    // users option

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    eucDist_One = (x2) - (x1);
    // formula
    eucDist_Two = (y2) - (y1);
    // Finds the difference

    totalEucDist = pow(eucDist_One, 2) + pow(eucDist_Two, 2);
// formula
    eucTotal = sqrt(totalEucDist);
    // (𝑥2 − 𝑥1)2 + (𝑦2 − 𝑦1)2
    // Make another variable to store the squared equation

    cout << endl;
    cout << "Euclidean Distance: " << eucTotal << endl;
    break;
case 'e':
    cout << "Enter a x1 value: ";
    cin >> x1;
    // users option

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y1 value: ";
    cin >> y1;
    // users option

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a x2 value: ";
    cin >> x2;
    // users option

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    cout << "Enter a y2 value: ";
    cin >> y2;
    // users option

    if (cin.fail())
    {
        // cout << endl;
        cout << "Error: Invalid Entry\n";
        return 0;
        // program exit
    }
    // input failure
    eucDist_One = (x2) - (x1);
// formula
    eucDist_Two = (y2) - (y1);
    // Finds the difference

    totalEucDist = pow(eucDist_One, 2) + pow(eucDist_Two, 2);
    // formula
    eucTotal = sqrt(totalEucDist);
    // (𝑥2 − 𝑥1)2 + (𝑦2 − 𝑦1)2
    // Make another variable to store the squared equation

    cout << endl;
    cout << "Euclidean Distance: " << eucTotal << endl;
    // formula
    break;
case 'Q' : 
return 0;
// quit option
break;
case 'q':
return 0;
// quit option
break;
default:
    cout << "Error: Invalid option" << endl;
    // default option
    break;
    }

}