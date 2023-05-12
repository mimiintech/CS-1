#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Prompt the user to enter the cost per room and then read in the value which will be a decimal.
    double input = 0.0;
    bool flagOne = false;

    // If an input error occurs, the value entered is less than 1, or the value entered is greater than 199.99 in
    // step 1, output the error and go back to step 1.

        do
        {
            cout << "Cost to rent a room: ";
            cin >> input;

            if (cin.fail() || input < 1 || input > 199.99)
            // numbers between
            {
                cout << endl;
                cout << "Error: Invalid entry, please retry\n";
                // error message
                flagOne = true;
                cin.clear();
                cin.ignore(100, '\n');
                // clearing the case
            }
            else
            {
                flagOne = false;
            }

        } while (flagOne);
        
    // Prompt the user to enter number of rooms to book and then read in the value which will be an
    // integer.


    int book = 0;
    bool flagTwo = false;

    // If an input error occurs, the value entered is less than 1, or the value entered is greater than 300 in
    // step 3, output the error and go back to step 3.


    do
    {
        cout << "Number of rooms booked: ";
        cin >> book;

        if (cin.fail() || input < 1 || input > 300)
        // numbers between
        {
                cout << endl;
                cout << "Error: Invalid entry, please retry\n";
                // error message
                flagTwo = true;
                cin.clear();
                cin.ignore(100, '\n');
                // clearing the case
        }
        else
        {
                flagTwo = false;
        }
    } while (flagTwo);

    // Prompt the user to enter number of days they will stay at the hotel and read in the value which will
    // be an integer.

    int days = 0;
    bool flagThree = false;

    // If an input error occurs, the value entered is less than 1, or the value entered is greater than 90 in step
    // 5, output the error and go back to step 5.

    do
    {
        cout << "Number of days: ";
        cin >> days;

        if (cin.fail() || input < 1 || input > 90)
        // numbers between
        {
                cout << endl;
                cout << "Error: Invalid entry, please retry\n";
                // error message
                flagThree = true;
                cin.clear();
                cin.ignore(100, '\n');
                // clearing the case
        }
        else
        {
                flagThree = false;
        }

    } while (flagThree);




    // int total = 0;

    // if (book >= 10) {
    //     total-=book;
    // }

    // if (book >= 20) {
    //     total-=book;
    // }

    // if (book >= 30) {
    //     total-= book;
    // }








        return 0;
}