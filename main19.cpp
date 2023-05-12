/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#6A
    Description: Practice asic file input & using a single dimension array
    Input: user/keyboard variables
    Output: display outputting variables
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>


using namespace std;

int main() {
    const int arraySize = 100;
    // The file contains a
    //  single column of numbers to be read into an array. The file contains at max 100 values
// (This means for this lab you are allowed 
// to use an array with a static size of 100).
    double arr[arraySize];
    ifstream reader;
    string fileName;
    int sum = 0;
    double minValue = 0;
    double maxValue = 0;
    double total = 0;

    do
{
    cout << "Enter a file name" << endl;
    cout << "**";
    cin >> fileName;
    // Prompts the user for a filename and reads the filename into a string.
    reader.open(fileName);
    if (!reader.is_open() || reader.fail())
    {
        cout << "Error: Invalid file name\n";
        cin.clear();
        cin.ignore(100, '\n');
    }

} while (!reader.is_open() 
|| reader.fail());

// Opens the file into an ifstream variable and verifies that it opened.  If the file does not open the program should
// output an error and continue from(1).

    while (!reader.eof())
{
    reader >> arr[sum];
    //  Reads all of the numbers from the file opened in (2) into an array.
    if (reader.fail())
    {

    
        reader.clear();
        reader.ignore(100, '\n');

        if (!reader.eof())
        {
            cout << endl;
            cout << "Error: Invalid input in file.\n";
            continue;
       }
        }
        else {
       // Once all the values are in an array 3 statistics should be found on the numbers contained in the array:
      
      
       if (arr[sum] < minValue)
       {
            minValue = arr[sum];
            // set it to the minValue
       }

       if (arr[sum] > maxValue)
       {
            maxValue = arr[sum];
       }
       total = total + arr[sum];
       sum++;
        }
}

    reader.close();
    //  If invalid input is read in while reading in from the file
    cout << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << "Amount of Elements Read In: " << sum << endl;
    // Prints the amount of elements read into the array from the file.

    cout << "Forwards: ";
    for (int forward = 0; forward < sum; ++forward)
    {
        cout << arr[forward];
        if (forward != sum - 1)
        {
       cout << ", ";
        }
    }
    cout << endl;
    cout << "Backwards: ";
    for (int backward = sum - 1; backward >= 0; backward--)
    {
        cout << arr[backward];
        if (backward != 0)
        {
       cout << ", ";
        }
    }
    double average = static_cast<double>(total)/sum;

    cout << "" << endl;
    // utput values should be fixed with 2
    // digits of precision
    cout << "Minimum: " << minValue << endl;
    // Prints the amount of elements
    cout << "Maximum: " << maxValue << endl;
    cout << "Sum: " << total << endl;
    cout << "Average: " << average << endl;
    // Prints the 4 statistics found in (4).

    return 0;
}
