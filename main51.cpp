/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#7A
    Description: basic input/output, file input, and two dimensional arrays.
    Input: user/keyboard variables
    Output: display outputting variables
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

    // Array size MUST BE CONSTANT
    const int a = 7, b = 10;
    // Declare
    double arr[a][b];

    // Open file
    ifstream reader;
    string fileName = " ";
    // User input

    do
    {
        cout << "Enter a file name" << endl;
        cout << "**";
        cin >> fileName;
        cout << endl;
        // User input
        reader.open(fileName);
        // Opens the file

        if (!reader.is_open() || reader.fail())
        {
            cout << "Error: Invalid file name\n";
            cin.clear();
            cin.ignore(100, '\n');
        }
        // Clears it until its the right file

    } while (!reader.is_open() || reader.fail());

    // Read from file
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            // Access element/store data
            reader >> arr[i][j];
        }
    }
    // Reads inside the file

    // Close file
    reader.close();

    // sums all of the rows
    double sumTotal = 0.0;
    // to print it into doubles
    cout << "ROW SUMS:" << endl;
    for (int y = 0; y < a; y++)
    // a comes from declared array
    // a = 7
    {
        cout << fixed << setprecision(1);
        sumTotal = 0.0; // resets
        for (int z = 0; z < b; z++)
        //  b comes from declared array
        // b = 10
        {
            // Access/output element
            sumTotal = sumTotal + arr[y][z];
            // adding the arrays
            if (z < b - 1)
            // j is less than b = 10
            {
                cout << left << setw(4) << arr[y][z] << " + ";
            }
            else
            {
                cout << left << setw(4) 
                << arr[y][z] << " = " << fixed 
                << setprecision(1) << sumTotal 
                << endl;
            }
            // prints the row total
        }
    }

    // sums all of the columns
    cout << endl;

    cout << "COLUMN SUMS:" << endl;
    // prints the columm
    for (int y = 0; y < b; y++)
    {
        sumTotal = 0.0; //resets
        cout << fixed << setprecision(1);
        // fixed & setprecision
        for (int z = 0; z < a; z++)
        {
            // Access/output element
            sumTotal = sumTotal + arr[z][y];
            // adding the arrays
            if (z < a - 1)
            {
                cout << left << setw(4) << arr[z][y] << " + ";
            }
            else
            {
                cout << left << setw(4) << arr[z][y] << " = " << fixed << setprecision(1)
                     << sumTotal << endl;
                // prints the column total
            }
        }
    }

    return 0;
}