/*
   Name: Michelle_Silva, 5006988436, CS135_1021, Lab 4B
   Description: do-while, for-loop, while-loop practice
   Input: user input values
   Output: displays the count, even, & odd numbers
*/

#include <iostream>

using namespace std; 

int main() {

int count = 0;
bool flag = false;

// do...while loop 
// count greater than 1 and less than or equal to 10000
do {
    cout << "Enter a count between 2 and 10000" << endl;
    cout << "**";
    cin >> count;



    if (cin.fail() || count <= 1 || count > 10000)
    // numbers between
    {   
        cout << endl;
        cout << "Error: Invalid entry, please retry\n";
        // error message
        flag = true;
        cin.clear();
        cin.ignore(100, '\n');
        // clearing the case
    } else {
        flag = false;
    }

    
} while (flag);

cout << endl;
// space between

int sum = 0;

// for loop 
// takes the sum of all of the even numbers from 1 to input

for (int i = 1; i <= count; i++)
{
    if (i % 2 == 0) {
        // can equal 0
    sum += i;
    }
}
cout << "Sum of even numbers: " << sum << endl;

int start = 1;
// when the value starts
int total = 0;

// while loop 
// sum of all of the odd numbers from 1 to input
while (start <= count) {
    if (start % 2 != 0){
        // cannot equal 0
        total += start;
    }
    start++;
}
cout << "Sum of odd numbers:  " << total << endl;

return 0;
}