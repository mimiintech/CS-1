/*
   Name: Michelle_Silva, 5006988436, CS135_1021, Lab#4A
   Description:  Practice Prompting the User for Integers
   Input: Three Integer Types
   Output: Printing with While Loop
*/

#include <iostream>

using namespace std;

int main()
{

    int startingNumber = 0;

    int endingNumber = 0;

    int increment = 0;

    bool flag = false;

    do
    {
        cout << "Enter a starting number\n";
        cout << "**";
        cin >> startingNumber;
        if (cin.fail())
        {
            flag = true;
            cin.clear();
            cin.ignore(100, '\n');
            cout << endl;
            cout << "Error: invalid entry.\n";
            cout << endl;
        }
        else
        {
            flag = false;
            break;
        }
    } while (flag);

    cout << endl;

    do
    {
        cout << "Enter an ending number\n";
        cout << "**";
        cin >> endingNumber;
        if (cin.fail())
        {
            flag = true;
            cin.clear();
            cin.ignore(100, '\n');
            cout << endl;
            cout << "Error: invalid entry.\n";
            cout << endl;
        }
        else
        {
            flag = false;
            break;
        }
    } while (flag);

    cout << endl;

    if (startingNumber >= endingNumber)
    {
        cout << "Error: end must be greater than start." << endl;
    }

    do
    {
        cout << "Enter a value to increment by\n";
        cout << "**";
        cin >> increment;
        if (cin.fail())
        {
            flag = true;
            cin.clear();
            cin.ignore(100, '\n');
            cout << endl;
            cout << "Error: invalid entry.\n";
            cout << endl;
        }
        else
        {
            flag = false;
            break;
        }
    } while (flag);

    cout << endl;

    for (; startingNumber <= endingNumber; startingNumber += increment)
    {
        cout << startingNumber << " ";
    }
    return 0;
}
