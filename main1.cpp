/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#1A
    Description: formulas_and_values
    Input: forumulas_datatypes
    Output: printed_values
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);

    int add = 5 + 2;
    int sub = 5 - 2;
    int mul = 5 * 2;
    int div = 5 / 2;
    int mod = 5 % 2;
    double dec = 5.0 / 2.0;

    // Formula & Data Types
    cout << "5 + 2 = " << add << endl;
    cout << "5 - 2 = " << sub << endl;
    cout << "5 * 2 = " << mul << endl;
    cout << "5 / 2 = " << div << endl;
    cout << "5 % 2 = " << mod << endl;
    cout << "5.0 / 2.0 = " << dec << endl;

    return 0; 
}





