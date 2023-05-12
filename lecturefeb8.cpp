// TEST QUESTION
// Switch Statements
// lIMITATIONS: 
// Only can check 1 variable at a time
// Only check for equality ==
// Cannot support strings


// single if-else statment for user input

#include <iostream>
#include <cmath>

using namespace std;

int main() {

//    int temp = 0;

//     switch (temp)
//     {
//      case 0:
//     cout <<"Running the first case\n";
//     break;

//     case 1:
//     cout <<"Running the second case\n";
//     break;

//     case 2:
//     cout << "Running the third case\n";
//     break;

//     default:
//     cout << "Running the default case\n";
//     break;

    // //  Same as 
    // if (temp ==0) {
    //     cout <<"Running the first case\n";
    // }

//     }
//     return 0;
// }

// cout << "What is the letter on the ticket" << endl;

// char ticketLetter;

// cin >> ticketLetter;

// // HOW TO BE PICKY WITH THE FORMAT
// // For ex. apple 

// cout << "Whats the letter on the ticket?" << endl;

// string userInput;

// getline(cin, userInput);

// if (userInput.length() != 1)
// {
//     cout << "Invalid" << endl;
//     return 0;
// }

// char ticketLetter = userInput[0];
// }



// switch (ticketLetter)
// {
// case 'A':
// case 'a':
//     cout << "exam 10 to 11 am\n";
//     break;

// case 'B':
// case 'b':
//     cout << "exam 11 to 12 am\n";
//     break;

// case 'C':
// case 'c':
//     cout << "exam 12 to 1 am\n";
//     break;

// case 'D':
// case 'd':
//     cout << "exam 1 to 2 am\n";
//     break;

// default:
// cout << "you are in the wrong building\n";
// break;
// }

// return 0;


// int x = 0;

// Conditional Expression
// (x > 10) ? cout << "Greater than 10" : cout << "Less than 10\n";
// Equaivalent to
// if (x > 10) {
    // cout << "Greater than 10\n";
// } else {
// cout << "Less than 10\n";
// }




// // EXAM QUESTION
// cout << "Enter an integer:\n";

// int x;

// cin >> x;

// // x = (x>=0) ? x : -x;
// // Shortest Code for Albsol. Value

// x = abs(x);

// cout << x << endl;



// WHILE LOOP
// int x = 1;

// // While: run as long as condiiton is true
// FOR AN INFINITE AMOUNT OF COUT STATEMENTS PUT INTO A WHILE LOOP
// while (x <= 10) {
//     cout << x++ << endl;
// }

// TEST QUESTION
cout << "How many stars do you want\n";

int starCount;

cin >> starCount;

while (starCount > 0) {
    cout << '*';
    starCount --;
    // has to be the opposite of the sign
}

cout << endl;

return 0;

}