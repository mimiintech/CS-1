/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#7B
    Description: practice file i/o,
     reading data into 2D arrays, 
     and processing data 
     contained within 2D arrays.
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
    const int a = 12, b = 2;
    // Declare
    double arr[a][b];

    // Open file
    ifstream reader;
    string fileName;

    // User input
    do
    {
        cout << "Enter file name" << endl;
        cout << "**";
        cin >> fileName;
        cout << endl;

        // User input
        reader.open(fileName);

        if (!reader.is_open() || reader.fail())
        {
            cout << "Error: Invalid File Name\n";
            cin.clear();
            cin.ignore(100, '\n');
        }
        // Clears it until it's the right file
    } while (!reader.is_open() || reader.fail());

    // the first line of the data
    string city;
    int year = 0;

    if (reader >> city >> year)
    {
        cout << city << " " << year << endl;
        // prints
    }

    // Read from rest of file
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            // Access element/store data
            reader >> arr[i][j];
        }
    }

    // find the lowest temp.
    double lowestTemp = arr[0][0];
    for (int i = 1; i < a; i++)
    {
        if (arr[i][0] < lowestTemp)
        {
            lowestTemp = arr[i][0];
        }
    }

    // find the average lowest temp.
    double averLowSum = 0;
    // stores the sum
    int numerOfTimes = 0;
    // stores the number of times
    // lowest temp occurs
    for (int i = 0; i < a; i++)
    {
        averLowSum += arr[i][0];
        // stores it
        numerOfTimes++;
        // the count times it occurs
    }
    double totalAverLow = averLowSum / numerOfTimes;
    // divide the sum by 
    // the number of time it occurs

    // find the highest temp
    double highestTemp = arr[0][1];
    for (int i = 1; i < a; i++)
    {
        if (arr[i][1] > highestTemp)
        {
            highestTemp = arr[i][1];
        }
    }

    // find the average highest temp.
    double averHighSum = 0;
    // stores the sum
    int numberCount = 0;
    // stores the number of times
    // lowest temp occurs
    for (int i = 0; i < a; i++)
    {
            averHighSum += arr[i][1];
            // stores it
            numberCount++;
            // the count times it occurs
    }
    double totalAverHigh = averHighSum / numberCount;
    // divide the sum 
    // by the number of time it occurs

    // Outputs
    cout << "Lowest temperature of the year was " 
    << fixed << setprecision(2) 
    << lowestTemp << "° F." 
    << endl;
    cout << "Highest temperature of the year was " 
    << fixed << setprecision(2) 
    << highestTemp 
    << "° F." << endl;
    cout << "Average low temperature of the year was " 
    << fixed << setprecision(2) 
    << totalAverLow << "° F." 
    << endl;
    cout << "Average high temperature of the year was " 
    << fixed << setprecision(2) 
    << totalAverHigh << "° F." 
    << endl;

    // Close file
    reader.close();

    return 0;
}
