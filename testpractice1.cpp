// TEST PRACTICE

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {


// // TAX RATE CALC.
// cout << "Welcome to the total price calc\n";

// cout << "Please enter the purchase:\n$ ";
// // Handles doubles $2.50 $1.20

// double purchasePrice;

// cin >> purchasePrice;

// cout << "Please enter the tax rate:\n% ";
// // %1, %2
// double taxRate;

// cin >> taxRate;

// // Formula
// // Total = pp + (pp * Tr/100)
// double  total = purchasePrice + (purchasePrice * (taxRate/100));

// cout << "The total price is: $" << total << endl;






// cout << "Enter first name: \n";

// string fName;

// getline(cin, fName);

// cout << "Enter last name: \n";

// string lName;

// getline(cin, lName);

// cout << "Enter year of birth: \n";

// int birth;


// while (!(cin >> birth)) {
//     cout << "ERROR: year of birth";

//     cin.clear();

//     cin.ignore(100, '\n');

//     cout << endl;
// }

// cout << lName << ", " << fName << " you are " << 2023 - birth << " years old!\n";

// CMATH
// #include <cmath>

    // cout << max(1, 2) << endl;
    // cout << min(1, 2) << endl;
    // cout << sqrt(4) << endl;
    // cout << abs(-2) << endl;
    // cout << round(5.6) << endl;
    // // Rounds Up
    // cout << floor(5.9) << endl;
    // Rounds Down

// setw & setfill

// cout << "part1" << setw(5) << "p2" << endl;
// width based on the width specified

// int num = 20;

// cout << "Before: " << num << endl;

// // Using setw
// cout << "Setting: " << num << setw(10) << endl;

// cout << num << endl;

// ********************************
// setfill
//  fill is to be set

// cout << setfill('_') << "part1" << setw(10) << "p2" << endl;

// int num = 50;

// cout << "Before: "
//      << setw(10);
// cout << num << endl;

// // Using setfill()
// cout << "Setting: " << setfill('*')
//      << setw(10);
// cout << num << endl;
// *************************************
// setprecision & fixed

// double result = 5.123567;

// cout << setprecision(2) << result << endl;
// // 5.1
// cout << round(result) << endl;
// // // Rounds Up
// cout << floor(result) << endl;
// // Rounds Down
// *******************************
// If-Statement

// double cost = 10.5;

// cout << "Hello!" << endl;

// int age = 0;

// cin >> age;

// if (age <= 15) {
//     cout << "Junior PASS" << endl;
//     cost *= 0.7;
//     cout << "Do you like Ice cream? (y/n)" << endl;
//     char response;
//     cin >> response;
//     if (response == 'y') {
//         cost *= 0.9;
//     } else {
//         cost = 1000;
//         cout << "Get out";
//     }
// }
// cout << "Enjoy your ride\nRide Cost: $" << cost << endl;
// ****************************************
// IF-THEN STATEMENTS

// cout << "Score? " << endl;
// double score;
// cin >> score;

// if (cin.fail()) {
//     cout << "Invalid" << endl;
//     return 0;
// } else if (score >= 90) {
//     cout << "Grade A" << endl;
// } else if (score <= 90 && score >= 80) {
//     cout << "Grade B" << endl;
// } else if (score <= 80 && score >= 70) {
//     cout << "Grade C" << endl;
// } else if (score <= 70 && score >= 60) {
//     cout << "Grade D" << endl;
// } else if (score <= 60 && score >= 50) {
//     cout << "Grade F" << endl;
// }
// return 0;



}
    
