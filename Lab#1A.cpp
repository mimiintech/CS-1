// Concatenate Strings Together

#include <iostream>

using namespace std;

int main()
{
    string firstName = "Mickey", lastName = "Mouse";

    string fullName = firstName + " " + lastName;

    // Output
    cout << firstName << " + " << lastName << " = " << fullName << endl;

    return 0;
}
*****************************************************
// Casting from One Data Type to another Data Type W/O the static_cast operator
//  simplified_cast.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);

    // Output casts W/O the static_cast operator
    cout << (double) (25) << endl
        << (double) (8+3) << endl
        << (double) (15) / 2 << endl
        << (int) ('A') << endl
        << (int) ('8') << endl
        << (char) (65) << endl
        << (char) (56) << endl
        << (int) (7.8 + (double) (15) / 2 ) << endl
        << (int) (7.8 + (double) (15/2)) << endl; 

        return 0; 
}
*********************************************
// static_cast.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(1);
    cout
        << static_cast<double>(25) << endl
        << static_cast<double>(8 + 3) << endl
        << static_cast<double>(15) / 2 << endl
        << static_cast<double>(15 / 2) << endl
        << static_cast<int>('A') << endl
        << static_cast<int>('8') << endl
        << static_cast<char>(65) << endl
        << static_cast<char>(56) << endl
        << static_cast<int>(7.8 + static_cast<double>(15) / 2) << endl
        << static_cast<int>(7.8 + static_cast<double>(15 / 2)) << endl;

        return 0;
}
*******************************************
// #include <iostream>

using namespace std;

int main() {
    // Floating Pnt Arithmetic
    double add = 1.2 + 1.2;
    double sub = 1.2 - 0.2;
    double mul = 2.5 * 3.0;
    double div = 10.0 / 4.0;

    cout 
        << "1.2 + 1.2 = " << add << endl
         << "1.2 - 0.2 = " << sub << endl
         << "2.5 * 3 = " << mul << endl
         << "10 / 4 = " << div << endl;

    return 0;
}
*************************************************

#include <iostream>

    using namespace std;

int main()
{
    // Integer Arithmetic
    int add = 1 + 1;
    int sub = 1 - 1;
    int mul = 2 * 15;
    int div = 9 / 4;
    int mod = 9 % 4;

    cout << "1 + 1 = " << add << endl
         << "1 - 1 = " << sub << endl
         << "2 * 15 = " << mul << endl
         << "9 / 4 = " << div << endl
         << "9 % 4 = " << mod << endl;

    return 0;
}
**************************************************

// pre/post decrement unary integer operators

#include <iostream>

using namespace std;

int main()
{
    int var1 = 1, var2 = 1;

    // Pre-decre
    int var3 = --var1;

    // Post-decre
    int var4 = var2--;

    cout
    << "var1 = " << var1 << endl
    << "var2 = " << var2 << endl
    << "var3 = " << var3 << endl
     1-1=0
    << "var4 = " << var4 << endl;
    //  suppose the value of ‘x’ is 10 then the value of variable ‘a’ will be 10 because the old value of ‘x’ is used.

    return 0; 

}
*************************************************

// pre/post increment unary integer operators.

#include <iostream>
using namespace std;

int main() {
int var1 = 0, var2 = 0;

// Pre-incre
int var3 = ++var1;
// Post-incre
int var4 = var2++;

cout
    << "var1 = " << var1 << endl
    << "var2 = " << var2 << endl
    << "var3 = " << var3 << endl
    // 0+1=1
    << "var4 = " << var4 << endl;
//  suppose the value of ‘x’ is 10 then the value of variable ‘a’ will be 10 because the old value of ‘x’ is used.
// 
return 0;
}
*******************************************************
/*
    Const throwing compiler
     error when attempting to change one.
*/
#include <iostream>

using namespace std;

int main()
{
    // Constant
    const double pi = 3.14159;

    // Causes compiler error since const
    pi = 3;

    return 0;
}
***********************************************************
// input_output.cpp
// Prompt for input,take in input, and display output.

#include <iostream>
using namespace std;

int main() {
    string name;
    // Prompt
    cout << "enter a name: ";

    // Input
    cin >> name;

    // Output 
    cout << "You entered " << name << endl;

    return 0;
}
***************************************************
#include <iostream>
using namespace std;

int main() {
    cout << "Hello!\n";
    return 0;
}
***********************************************