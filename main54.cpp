/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#9B
    Description: practice using basic input/output and making user defined functions
    Input: user/keyboard variables
    Output: display outputting variables
*/

#include <iostream>
#include <iomanip>
using namespace std;

//  *******************************************************
int add(int, int);
string add(string, string);
int multiply(int, int);
string multiply(string, int);

// **********************************************************

int main() {

int count = 0;
// 1
bool flag = false;
do
{
    cout << "Enter an integer between 1 and 50"  << endl;
    cout << "**";
    cin >> count;


if (cin.fail() || (count < 1  || count > 50))
{
    cout << endl;
    cout << "Error: Invalid input!\n";
    flag = true;
    cin.clear();
    cin.ignore(100, '\n');
} else {
    flag = false;
}

} while (flag);

cout << endl;

int countAgain = 0;
// 2

do
{
cout << "Enter another integer between 1 and 50" << endl;
cout << "**";
cin >> countAgain;

if (cin.fail() || (countAgain < 1 || countAgain > 50))
{
    cout << endl;
    cout << "Error: Invalid input!\n";
    flag = true;
    cin.clear();
    cin.ignore(100, '\n');
}
else
{
    flag = false;
}

} while (flag);

cout << endl;
// ***************************************************

string user1 = "";
// 3
string user2 = "";
// 4

cout << "Enter a string" << endl;
cout << "**";
cin >> user1;

cout << endl;

cout << "Enter another string" << endl;
cout << "**";
cin >> user2;

// *********************************************************

// Calls in the add function
add(count, countAgain);
// Calls in the string add function
add(user1, user2);
// Calls in the int multiply function
multiply(count, countAgain);
// Calls in the string multiply function
multiply(user1, count);
// first call should multiply the string from (3)
//  by the int from(1).
// 1 & 3
multiply(user2, countAgain);
// // 4 & 2

return 0;
}
// CLOSES THE MAIN FUNCTION
// *****************************************
// FUNCTIONS

int add(int num1, int num2) {
   int  addResult = num1 + num2;
   cout << fixed << setprecision(2);
   cout << endl;
   cout << num1 << " + " << num2 << " = " << addResult << endl;
   return addResult;
}

// ************************************************************

string add(string str1, string str2) {
   string addString = str1 + str2;
   cout << fixed << setprecision(2);
   cout << str1 << " + " << str2 << " = " << addString << endl;
   return addString;
}

// **********************************************************

int multiply(int num1, int num2) {
    int multiResult = num1 * num2;
    cout << fixed << setprecision(2);
    cout << num1 << " * " << num2 << " = " << multiResult << endl;
    return multiResult;
}

// **********************************************************

string multiply(string str, int num) {
// Loop
    string res = "";
    for (int i = 0; i < num; i++)
    {
        res += str;
    }
    cout << str << " * " << num << " = " << res << endl;
    return res;
}
// *********************************************************************


