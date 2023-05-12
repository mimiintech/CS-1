/*
    Name: Michelle_Silva, 5006988436, CS135_1021, SP-23_Assign_0
    Description: hello_codegrade
    Input: caption_cs135_assign_0
    Output: print_hello_codegrade
*/

#include <iostream>

using namespace std;

int main() {

// Do While Loop for User Input
int num;
bool flag = false;


do
{
    cout << "Enter a count between 2 and 20" << endl;
    cout << "**";
    cin >> num;

    
    if (cin.fail() || num <= 1 || num > 20)
    // numbers between
    {
        cout << endl;
        cout << "Error: Invalid entry, please retry\n";
        // error message
        flag = true;
        cin.clear();
        cin.ignore(100, '\n');
        // clearing the case
    }
    else
    {
        flag = false;
    }


} while (flag);

cout << endl;


// For Loop for first triangle output
// Star Patterns

for (int a = 0; num >= 1; num--)
{
 for (int b = 1; b <= num; b++)
 {
    cout << "*";
 }
 cout << "\n";
 
}

// While Loop for second triangle output

int amountOfStars = 1;

while (amountOfStars <= num)
{
 // Output amountOfStars number of stars
 int i = 1;
 while (i <= amountOfStars)
 {
    cout << "*";
    i++;
 }
 cout << endl; // move to the next line

 amountOfStars++; // increment amountOfStars by 1
}

return 0;
}