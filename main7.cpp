/*
   Name: Michelle_Silva, 5006988436, CS135_1021, Lab 2B
   Description: Calculates the circumference & the area of a circle
   Input: prompts the user to enter a radius
   Output: Calculates circumference & area
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.141592;
// pie value

int main()
{

    double radius = 0.0;

    double circumference = 0.0;

    double area = 0.0;
    // value placeholders

    cout << "Enter the radius of a circle" << endl;
    // print user input

    cout << "**";

    cin >> radius;
    // user 'radius

    cout << endl;
    // space between

    circumference = 2 * pi * radius;

    area = pi * radius * radius;
    // formula conversions

    string separator = "+--------+---------------+---------+\n";
    string h1 = "radius", h2 = "circumference", h3 = "area    |";
    string headers = "| " + h1 + " | " + h2 + " | " + h3 + " \n";
    // formatting

    cout
        << fixed
        << separator
        << headers
        << separator
        << left
        << setprecision(2)                    // switch to precision of 2
        << "| " << setw(6) << radius          // first piece of data in row
        << " | " << setw(14) << circumference          // second piece of data in row
         << "| " << setw(8) << area << "|\n"   // third piece of data in row
        << separator;

    return 0;
}