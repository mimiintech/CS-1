// Values and Variables

// #include <iostream>

// using namespace std;

// int main() {
//     cout << 4 << '\n';
// }

// Prefered method
// int main() {
//     cout << "4\n";
// }

// int main() {
//     // Declaration 
//     int x;
//     // Assignment
//     x = 10;
//     // x is assigned the value 5
//     // Prints the value of x
//     cout << x << '\n';
//     // Prints just x
//     cout << "x" << '\n';
// }

// Multiple Assignment 
// int main() {
//     int x;
//     x = 10;
//     cout << x << '\n';
//     x = 20;
//     cout << x << '\n';
//     x = 30;
//     cout << x << '\n';
// }

// Initilizing in a single statement
// Variables called objects
// Same type can be declared and initialized in a single statement

// int main() {

// // Declaration
// int x, y, z;

// // Initializes 

// x = 0, y = 1; z = 5;

// cout << x << '\n' << y << '\n' << z << '\n';
// }

// int main() {

//     int a, b;
//     a = 2;
//     b = 5;
    // The once 2 turns into a 5
    // a = b;
    // Then the b is replaced by a 4
    // b = 4;
    //  It simply means the value stored in b’s box (memory location) has 
    // been copied to a’s box (memory location). a and b remain distinct boxes (memory locations).

//     cout << a << '\n' << b << '\n' << '\n';
// }

// INTEGERS
// short int ≤ int ≤ long int ≤ long long int

// UNSIGNED: they do not allow a negative sign
// unsigned short ≤ unsigned ≤ unsigned long ≤ unsigned long long

// Int litereal 

// int x = 4;

// Long literal 
// long x = 4456L;
// long x = 4456l;

// Double Literal
// 2.0

// Float Literal 
// 2.0f

// Scientific Notation

// int main() {
//     double avogadros_number = 6.022e23, c = 2.998e8;

//     cout << "Avogadro's number = " << avogadros_number << '\n';
//     cout << "Speed of light = " << c << '\n';
//     }

// Constants 

// int main() {
//     const double PI = 3/14159;

//     PI = 2.4;
// Const can't be reassigned**ERROR

    // REWRITE SCIENTIFIC NOTATION

//     int main() {
//     const double avogadros_number = 6.022e23, c = 2.998e8;
//     cout << "Avogadro's number = " << avogadros_number << '\n';
//     cout << "Speed of light = " << c << '\n';
// }


// CHAR
 
//  int main() {
//     char ch = 'A';

//     //  Allows stored integer values
//     char ma = 65;

//     cout << ch << '\n';
//     cout << ma << '\n';
//  }

// Strings
// ("") reserved for strings

// Enumerated Types
// : to create a new, very simple type and list all the possible values of that type
// : enables for a variable to be a set of predefined constants.


//     enum color {
//         Red, 
//         Orange,
//         Yellow,
//         Green,
//         Blue,
//         Violet
// };

//     int main() {

//         int i;

//         for (i = Red; i <= Violet; i++)
//             cout << i << " ";

//         return 0;
//     }

    // Auto allows the compiler to automatically deduce the type of a variable 
    // if it is initialized when it is declared

// int main()
// {

//     // Use auto keyword to declare a variable.
//     auto weight = 55.6;

//     // Use auto keyword to declare a different type of variable.
//     auto age = 32;

//     // Print the variables.
//     cout << "Weight is " << weight << " kg and age is " << age << '\n';

//     return 0;
// }

// int main() {
//     cout << "Hello there" << '\n';
//     return 0;
// }

// Expressions and Arithmetic

// #include <iostream>

// using namespace std;

// int main()
// {
//     int value1, value2, sum;

//   cout << "Please enter two integer values: ";
// // Output
//    cin >> value1 >> value2;
// //    Input
//     sum = value1 + value2;
//  cout << value1 << " + " << value2 << " = " << sum << '\n';
// }

// Unsigned numbers have double the range - true
// They can be positive and negative 
// 0 - 7 = 8 numbers 0 - 3 = 4 numbers

// MAX FOR INT - Created an overflow 2147483647

// unsigned int maxRange = 2147483647;

// cout << maxRange + 1 << endl;

// Declare & init.

// #include <iostream>

// using namespace std;

// int main() {

// double studentGPA = 4.0;

// cout << "Hello " << studentGPA << '\n';
// }

// Unary Operators: has only one operand



// Modulus Operator 

// #include <iostream>

//     using namespace std;

// int main() {

//     int a = 10;


// }