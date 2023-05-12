#include <iostream>
#include <iomanip>
 #include <cmath>

using namespace std;

int main() {

// APPLICATION
    // Area = pi * radius^2

// Ask the User for the Radius of a Circle
// const double pi = 3.14;
// double area;
// char response;

// cout << "What's the radius?" << endl;
// double radius;
// cin >> radius;

// // area = pi * radius * radius;
// area = pi * pow(radius, 2);
// cout << "Area: " << area << endl;

// cout << "Do you want to do another calculation? (y/n)" << endl;
// cin >> response;

// if (response == 'y') {
//     cout << "What's the radius?" << endl;
//     double radius;
//     cin >> radius;
//     area = pi * pow(radius, 2);
//     cout << "A Circle with Radius of " << radius << " has an Area of " << area << endl;
// } else if (response == 'n'){
//     cout << "Goodbye!" << endl;
//     return 0;
// }


// APPLICATION

// cout << "Hello! Submit a sentence: " << endl;
// cout << "**";
// string user;
// getline(cin, user);
// cout << "Submit a letter: " << endl;
// cout << "**";
// char letter;
// cin >> letter;

// Get the index of letter from user string
// The . find() method returns the index of 
// the first occurrence of the specified string or character.

// int index = user.find(letter);
// // Hello there
// // find the index of char letter e

// if (index != string::npos)
// {
//     cout << "First occurrence is " << index << endl;
// } else
//     cout << "-1" << endl;

// APPLICATION

// double x = 10;
// double y = 3;

// cout << static_cast<double>(x) / static_cast<double>(y) << endl;


// int x = -1;
// while (x <= 0) {
// cout << "The value of x: " << x << endl;
// // -1
// x++;
// // 0
// }
// // -2,-1,0

// int num = 50;

// cout << "Before setting the width: \n"
//      << num << endl;

// // Using setw()
// cout << "Setting the width"
//      << " using setw to 5: \n"
//      << setw(5);

// cout << num << endl;

// APPLICATION
// Calc. the area of a Triangle
// Area = 1/2absin(C)

// double sideA;
// double sideB;
// double angleC;

// cout << "What is side A?: " << endl;
// cin >> sideA;

// cout << "What is side B?: " << endl;
// cin >> sideB;

// cout << "What is angle degree c?: " << endl;
// cin >> angleC;

// double area = 0.5 * sideA * sideB * sin(angleC);

// cout << "Area: " << area << endl;

// APPLICATION

// cout << "Enter a string" << endl;

// string user;

// getline(cin, user);
// // string holder

// cout << "Enter a search character: " << endl;
// char search;
// cin >> search;
// char letter

// int index = -1;
// // Doesn't include letter, output -1

// for (int i = 0; i < user.length(); i++) {
//     // string length
//     // start at 0 & increment
//     // i = 0 & i++
//     if (user[i] == search) {
//         // when string index loop equals to char letter
//         index = i;
//         // the index value (-1) is updated to value (i)
//         cout << index << endl;
//         // Mimi
//         // m
//         // 2
//         break;
//     }
// }
// if (index != -1) {
//     // index not equal to -1
//     cout << "Found at index " << index << endl;
//     // the updated value of index 
// } else {
//     cout << "Letter Not found" << endl;
// }


// int x = 20;
// int y = 3;
// // 6.66666 outputs a double
// // cast to a double

// cout << setprecision(2) << fixed <<
// static_cast<double>(x) / static_cast<double>(y) << endl;
// setprecision(2) & fixed
// output as a double (6.67)


// string x = "X";
// // String because of " "
// // double quotes
// char y = 'Y';
// // char because of ' '
// // single quotes
// bool x = false;

// int x = 19;
// // if x (19) is less than 20 then, it ended!
// if (x > 20) {
//     cout << ++x << endl;
// }else cout << "Ended!" << endl;
// // ENDED!

// int y = 21;
// // if y (20) is more than 20 then, 1 increment!
// if (y > 20)
// {
//     cout << ++y << endl;
// }
// else
//     cout << "Ended!" << endl;
// 22

// int z = 10;
//     // if z (10) is more than 20 then, 1 increment!
//     //  OR
//     // if z (10) is less than 50 then, 1 increment!
// if (z > 20 || z < 50)
// {
//     cout << ++z << endl;
// }
// else
//     cout << "Ended!" << endl;
// 11

// int h = 10;
// // if h (10) is less than 50 then, 1 increment!
// if (h < 50)
// {
//     cout << ++h << endl;
// }
// else
//     cout << "Ended!" << endl;
// // 11

// APPLICATION

// string str;
// cout << "Enter a string: " << endl;
// cin >> str;
// cout << str.substr(2) << endl;

// APPLICATION

// bool flag = false;

// int a,b;

// do {
//     flag = false;
//     cout << "Enter a value for 'a'" << endl;
//     cin >> a;

//     if (cin.fail()) {
//         flag = true;
//         cin.clear();
//         cin.ignore(100, '\n');
//     }
    
// } while(flag); 


// do {
//     cin.clear();
//     cin.ignore(100, '\n');
//     cout << "Enter a value for 'b'" << endl;
//     cin >> b;

// } while (cin.fail() || b == 0);
// // doesn't accept 0

// cout << "The result: " << a/b << endl;

// NEWLINES
// endl or \n to create new line commands in C++

// variable names are case-sens.

// the cd cmd will not take you to desktop
// cant' cast double to int
// can't cast string to int
// switch state. can have no default case

return 0;
}