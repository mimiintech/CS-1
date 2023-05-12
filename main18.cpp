/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab5B
    Description: practice C++ loops, input/output, file input, correcting input stream if failed
    Input: Prompts the user for a filename
    Output: adds the lines & then the total sum
*/

#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    //  Creates a variable to keep track of a running total
    ifstream iFile; 
    // 	Reads from files

    // Prompts the user for a filename and 
    // reads the filename into a string.

    // bool flag = false;
    // Loops

    //
    // Opens the file, and verifies that it opened.
    // If the file does not open the program should 
    // output an error message and
    // start from(2) again.

    do
    {

        cout << "Enter file name" << endl;
        cout << "**";
        string fileName;
        cin >> fileName;
        cout << endl;
        // use cin instead of getLine

        iFile.open(fileName);
        if (!iFile.is_open() || iFile.fail())
        // file is not opening
        // cin.fail() same as iFile.fail()
        // both conditions are the same
        {
            cout << "Error: Invalid file name\n";
            // flag = true;
            cin.clear();
            cin.ignore(100, '\n');
        }
        // else
        // {
        //     // flag = false;
        // }
    } while (!iFile.is_open() || iFile.fail());
    // both conditions are the same

    //  Reads in two numbers from the data file.
    int n1 = 0; 
    int n2 = 0;
    int sum = 0;
    int total = 0;

    while (!iFile.eof())
    {
        iFile >> n1 >> n2;
        // cin >> n1 >> n2
        if (iFile.fail()) {
            iFile.clear();
            iFile.ignore(100,'\n');
            cout << "Error in line\n";
        }
        else {
            sum = n1 + n2;
            // 7 = 2 + 5
            cout << n1 << " + " << n2 << " = " << sum << endl;
            // 88 = 12 + 76
            // goes by line by line & prints since it's in a loop
            total = total + sum;
            // 7 = 0 + 7
            // goes into a loop 
            // 95 = 7 + 88
            // 117 = 95 + 22
        }
    }
    cout << endl;
    cout << "Running total" << " = " << total << endl;
    // prints the total outside the loop


   iFile.close();

   return 0;
}