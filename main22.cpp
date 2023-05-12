/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#6B
    Description: practice using basic file I/O, 1D arrays, parallel arrays.
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
    // constant arraySize
    string namesValue[arraySize];
    // names array
    double scoresValue[arraySize];
    // scores array
    ifstream reader;
    // ifstream
    string fileName;
    // user input file name
    string toFind;
    // user name find
    // bool found = false;
    int countValue = 0;
    double sumValue = 0.0;
    //  double sum to 0.0.
    // cout sum
    double minValue = 0;
    // cout min
    double maxValue = 0;
    // cout max
    int foundCnt = 0;

    do
    {
        cout << "Enter a file name" << endl;
        cout << "**";
        cin >> fileName;
        // Prompts the user for a filename and 
        // reads the filename into a string.
        reader.open(fileName);
        if (!reader.is_open() || reader.fail())
        {

            cout << endl;
            cout << "Error: Invalid file name.\n";
            // ERROR
            cin.clear();
            cin.ignore(100, '\n');
        }

    } while (!reader.is_open() || reader.fail());

    //  read data from the file into the arrays
    while (reader >> namesValue[countValue] && reader >> scoresValue[countValue] && countValue < arraySize)
    {countValue++;}
    // Reads the names and numbers (scores) 
    // from the file opened in (2) into 2 parallel arrays.

    cout << endl;
    cout << "Enter a name to search" << endl;
    // enters a string names
    cout << "**";
    cin >> toFind;
    cout << endl;

    // Search for name in array
    for (int i = 0; i < countValue; i++)
    {
        // from 0 to countValue
        if (namesValue[i] == toFind)
        {   
            minValue = scoresValue[i];
            maxValue = scoresValue[i];
            // initializes the values
            // setting the min
            // cout << endl;
            // found = true;
            break;
        }
   }

    // cout << endl;
   cout << "Names Forward: ";
   for (int forward = 0; forward < countValue; ++forward)
   {
        // Prints both arrays from (4) forwards
        cout << namesValue[forward];
        if (forward != countValue - 1)
        {
            cout << ", ";
            // space between
        }
   }
   cout << endl;
   cout << "Scores Forward: ";
   for (int forward = 0; forward < countValue; ++forward)
   {
        // Prints both arrays from (4) forwards
        cout << scoresValue[forward];
        if (forward != countValue - 1)
        {
            cout << ", ";
            // space between
        }
   }
   cout << endl;
   cout << "Names Reverse: ";
   for (int backward = countValue - 1; backward >= 0; backward--)
   {
        // Prints both arrays from (4) backwards
        cout << namesValue[backward];
        if (backward != 0)
        {
            cout << ", ";
            // space between
        }
   }
   cout << endl;
   cout << "Scores Reverse: ";
   for (int backward = countValue - 1; backward >= 0; backward--)
   {
        // Prints both arrays from (4) backwards
        cout << scoresValue[backward];
        if (backward != 0)
        {
            cout << ", ";
            // space between
        }
   }

   // MIN,MAX,SUM,AVERAGE
   for (int i = 0; i < countValue; i++)
   {
        if (namesValue[i] == toFind){
            // Check if the current element in names is equal to toFind.
            if (scoresValue[i] < minValue)
            {
                minValue = scoresValue[i];
            }
            // if the current score is less than or greater 
            // than the score at the index currently held in
            // min and max
            if (scoresValue[i] > maxValue)
            {
                maxValue = scoresValue[i];
            }
            sumValue = sumValue + scoresValue[i];
            // If they are equal then add 
            // the element in scores at the same index to your sum and increment
            // foundCnt.
            foundCnt++;
            //  keep track of how many name/number combinations
        } 
    }

    double average = sumValue / foundCnt;
    // takes the average

    cout << endl;
    if (foundCnt == 0) {
        cout << "Error: " << toFind << " is not a student in the list" << endl;
        // If the entered user is not found then foundCnt will be 0.
    } 

// print statements

// setprec. shoepoint, fixed
        cout << setprecision(2) << fixed << showpoint;
        cout << foundCnt << " results for " << toFind << endl;
        // shows the result for the name 
        cout << "Minimum: " << minValue << endl;
        // the min.
        cout << "Maximum: " << maxValue << endl;
        // max
        cout << "Sum:     " << sumValue << endl;
        // sum
        cout << "Average: " << average << endl;
        // average
    

    reader.close();
    // close the reader
    

    return 0;
}
