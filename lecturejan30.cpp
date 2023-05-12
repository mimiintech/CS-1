#include <iostream>

using namespace std;

// int main() {

//     // int x = 10, y = 6, z = 3;

//     // y = x * 2;

//     // cout << "Equals = " << y << endl;

//     // cout << y /3.0 << endl;

//     // string s1 = "100", s2 = "200";

//     // cout << stoi(s1)+ stoi(s2) << endl;

//     // to convert from string to int: stoi
//     // you cant't cast a string to an integer

//     // int x = 10, y = 3;

//     // cout << double(x) / static_cast<double>(y) << endl;
//     // Casting int to double

//     // cout << x / y << endl;
//     // Needs to cast to double 

//     // int x = 10, y = 3;

//     // cout << x % y << endl;
//     // Modulus Remainder

    
//     // INCREMENTS
//     // int x = 10, y = 3;

//     // x = x + 5;

//     // x += 5;

//     // x++;

//     // ++x;

//     // cout << --x << endl;
//     // cout << ++x << endl;
//     // cout << x++ << endl;
//     // cout << x-- << endl;


//     // const double pi = 3.14;

//     // // pi = 3.0;

//     // double r = 4;
//     // double result = pi * r * r;

//     // cout << result << endl;


//     // Strings

//     // Hello
//     // 01234


//     // string myString = "Hello from CS 135";


//     // cout << "The length of myString : " << myString.length() << endl;
//     // cout << "The last index of myString: " << myString.length() - 1 << endl;
//     // // -1 outside
//     // cout << "The last character of myString: " << myString[myString.length() -1] << endl;
//     // cout << myString.substr(3) << endl;
//     // cout << myString.substr(0,3) << endl;
//     // cout << myString.substr(10,3) << endl;

//     // Append 


//     // User Input

    int main() {

    string userName = "";
    // Initizlize for code grade

    cout << "Enter a username" << endl;

    // cin >> userName;
    // Holds within the string

    getline(cin, userName);
    // To get a string with spaces in it

    cout << "You entered: " << userName << endl;

    return 0;
}