/*
   Name: Michelle_Silva, 5006988436, CS135_1021, SP 23 A#2
   Description:  Practice on Arithmetic and C++ libraries
   Input: Storing variables, perform arithmetic 
   Output: Output Findings
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double planex = 0.0; 
    // X^2

    double airportx = 0.0;
    // X^1

    double planey = 0.0;
    // x^2

    double airporty = 0.0;
    // x^1
// Declare & intitalize variables

    // User Prompt Questions
    cout << "Enter plane’s x coordinate: ";

    cin >> planex;
    
    cout << "Enter plane’s y coordinate: ";

    cin >> planey;

    cout << "Enter airport’s x coordinate: ";

    cin >> airportx;

    cout << "Enter airport’s y coordinate: ";

    cin >> airporty;
    // receives input

    // output

    cout << endl;

    cout << "Coordinates:";
    // header

    cout
         << "\n"
         << "+-----------+-----------+-------------+-------------+" << endl;
    cout << "| plane-x   | plane-y   | airport-x   | airport-y   |" << endl;
    cout << "+-----------+-----------+-------------+-------------+" << endl;
    // Header

    cout << "| " << left 
        << setw(9) 
        << fixed << setprecision(2)
         << planex << " | " 
         << setw(9) 
         << fixed << setprecision(2) 
        //  Rounds to two decimal places
         << planey << " | "
         << setw(11) << fixed << setprecision(2) 
         << airportx << " | " 
         << setw(11) << fixed 
         << setprecision(2) << airporty <<
        " |" << endl 
        << "+-----------+-----------+-------------+-------------+" << endl;
    // Bottom section

    cout << endl;

    // The (x, y) coordinate of the plane is read into floating-point variables.
    // The (x,y) coordinate of the airport is read into floating-point variables.

    cout << "Distances:";
    // header

    cout
        << "\n"
         << "+-----------+-----------+-------------+-------------+" << endl;
    cout << "|    x-axis |    y-axis |   manhattan |   euclidean |" << endl;
    cout << "+-----------+-----------+-------------+-------------+" << endl;
    // Header



// The x-axis distance is calculated by performing the |x2 - x1| 

    double manDist_One = 0.0;

    double manDist_Two = 0.0;

    double totalManDist = 0.0;

        // Declare & intitalize variables

    manDist_One = abs(planex - airportx);

    manDist_Two = abs(planey - airporty);
    // Finds the difference

    totalManDist = manDist_One + manDist_Two;
    // Takes the last two equations with the albsolute value

    // |x^2 - x^1 | + |y^2 - y^1|;

    double eucDist_One = 0.0;

    double eucDist_Two = 0.0;

    double totalEucDist = 0.0;
    // declare & initialize new variables

    eucDist_One = (planex) - (airportx);

    eucDist_Two = (planey) - (airporty);
    // Finds the difference

    totalEucDist = pow(eucDist_One, 2) + pow(eucDist_Two, 2);
    // Make a new variable to store both equations and set the power to two

    double eucTotal = sqrt(totalEucDist);
        // (𝑥2 − 𝑥1)2 + (𝑦2 − 𝑦1)2
        // Make another variable to store the squared equation

    cout
            << "| " << right << setw(9) 
            << fixed << setprecision(2) 
            << manDist_One << " | " << setw(9) 
            << fixed << setprecision(2) << manDist_Two 
            // Rounds to two decimal places
            << " | " << setw(11) << fixed << setprecision(2) 
            << totalManDist << " | " << setw(11) << fixed 
            << setprecision(2) << eucTotal << " |" << endl 
            // Calls upon the eucTotal 
            << "+-----------+-----------+-------------+-------------+";
    // Bottom section

    return 0;
}

