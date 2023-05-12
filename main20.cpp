#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{

    const int arraySize = 100;
    string names[arraySize];
    int scores[arraySize];

    ifstream reader;
    string fileName;
    string toFind;
    bool found = false;
    int count = 0;
    double sum = 0.0;
    int minIndex = 0;
    int maxIndex = 0;
    int foundCnt = 0;

    do
    {
        cout << "Enter a file name: ";
        cin >> fileName;

        // Open the file.
        reader.open(fileName);

        if (!reader.is_open())
        {
            cout << "Error: Invalid file name\n";
        }
        else
        {
            // Read data from the file into the arrays.
            while (reader >> names[count] && reader >> scores[count] && count < arraySize)
            {
                count++;
            }

            // Close the file.
            reader.close();

            if (count == 0)
            {
                cout << "Error: File is empty\n";
            }
            else
            {
                break;
            }
        }
    } while (true);

    cout << "Enter a name to search: ";
    cin >> toFind;

    // Search for name in array and calculate stats.
    for (int i = 0; i < count; i++)
    {
        if (names[i] == toFind)
        {
            sum += scores[i];
            foundCnt++;

            if (scores[i] < scores[minIndex])
            {
                minIndex = i;
            }

            if (scores[i] > scores[maxIndex])
            {
                maxIndex = i;
            }

            found = true;
        }
    }

    // Print results.
    if (found)
    {
        cout << "Found " << toFind << "'s score:" << endl;
        cout << fixed << setprecision(2);
        cout << "  Score: " << scores[minIndex] << " (Min)\n";
        cout << "  Score: " << scores[maxIndex] << " (Max)\n";
        cout << "  Score: " << sum << " (Sum)\n";
        cout << "  Score: " << sum / foundCnt << " (Avg)\n";
    }
    else
    {
        cout << toFind << " was not found in the list.\n";
    }

    cout << "Names Forward: ";
    for (int i = 0; i < count; i++)
    {
        cout << names[i];
        if (i != count - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Scores Forward: ";
    for (int i = 0; i < count; i++)
    {
        cout << scores[i];
        if (i != count - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Names Reverse: ";
    for (int i = count - 1; i >= 0; i--)
    {
        cout << names[i];
        if (i != 0)
        {
            cout << ", ";
        }
    }
    cout << endl;

    cout << "Scores Reverse: ";
    for (int i = count - 1; i >= 0; i--)
    {
        cout << scores[i];
        if (i != 0)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
