/*
    Name: Michelle_Silva, 5006988436, CS135_1021, #SP23-4
    Description: cost to stay at the Krusty Towers
    Input: prompt the user for input
    Output: the cost, discounts, cost after discount, taxes, cost
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // cost per room
    bool flagTwo = false;
    
    const int roomMin = 1;
    const double priceRoomMax = 199.99;

    // number of rooms
    int book = 0;
    const int roomMax = 300;

    // number of days
    const int min = 1;
    const int max = 90;

    // discounts
    const double ten = 0.1;
    const double twenty = 0.2;
    int days = 0;
    bool flagThree = false;
    const double thirty = 0.3;
    // selection to continue/quit
    char choice = ' ';
    bool flagOne = false;
    const double priceRoomMin = 1.0;

    // Another 3 days discount
    const double deductDiscount = 0.05;
    double input = 0.0;


    do
    // wrap around a large do-while 
    {  
        do
        // smaller do-while
        {
            cout << "Cost to rent a room: ";
            cin >> input;

            // //  if cin fails
            if (cin.fail() 
                || input <  priceRoomMin 
                || input > priceRoomMax)
    
            // numbers between
            {
                cout << "Input failure, can't be processed! :(\n";
                // error message
                flagOne = true;
                cin.clear();
                cin.ignore(100, '\n');
                // clearing the case
            }
            else
            {
                flagOne = false;
                // bool flag
            }

        } while (flagOne);

        //   smaller do-while
        do
        {
            cout << "Number of rooms booked: ";
            // user input
            cin >> book;

            //  if cin fails
            if (cin.fail() || book < roomMin || book > roomMax)
            // numbers between
            {
                cout << "Input failure, can't be processed! :(\n";
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

        //   smaller do-while
        do
        {
            cout << "Number of days: ";
            cin >> days;

//  if cin fails
            if (cin.fail() || days < min || days > max)
            // numbers between
            {
                cout << "Input failure, can't be processed! :(\n";
                // error message
                flagThree = true;
                cin.clear();
                cin.ignore(100, '\n');
                // clearing the case
            }
            else
            {
                flagThree = false;
                // bool 
            }

        } while (flagThree);

    //  total cost before discounts,
        double total = 0.0;
        total = input * book * days;

        // total discount
        double discount = 0;
        // 10 rooms
        if (book >= 10)
        {

        discount = total * ten;
    } 
// 20 rooms
      if (book >= 20) {
        discount = total * twenty;
    }
// 30 rooms
    if (book >= 30) {
        discount = total * thirty;
    }

// User stays for 3 days
    if (days >= 3) {
        discount += total * deductDiscount;

    } 
// Cost after discount
    double totalAfter = 0.0;
    totalAfter = total - discount;

    // sales tax
    const double salesTax = 0.0815;

    // Taxes
    double tax = salesTax * totalAfter;
    double totalTax = totalAfter + tax;

    cout<<endl;


// fixed, setprecision

    cout << "Total Cost..............................$ "
         << setw(9) << fixed << setprecision(2) << total << endl;

    cout << "Discounts...............................$ "
         << setw(9) << fixed << setprecision(2) << discount << endl;

    cout << "Cost after discount.....................$ "
         << setw(9) << fixed << setprecision(2) << totalAfter << endl;

    cout << "Taxes...................................$ "
         << setw(9) << fixed << setprecision(2) << tax << endl;

    cout << "Final Cost..............................$ "
         << setw(9) << fixed << setprecision(2) << totalTax << endl;

    cout << endl;

    cout << "Enjoy your stay! :)" << endl;

    cout << endl;


// switch for the user 
// continue/break
    cout
         << "Do you wish to continue or quit? ";
        //  user choice to continue or not
    cin >> choice;
    switch (choice)
    {
    case 'Q':
        cout << "Until next time, try and have a great day! :)";
        return 0;
        break;
        // terminates 
    case 'q':
        cout << "Until next time, try and have a great day! :)";
        return 0;
        break;
    case 'C':
        continue;
    case 'c':
        continue;
        default:
            cout << "Input failure, can't be processed!";
            break;
        };
// accpts C or c
} while (choice == 'c' || choice == 'C');


return 0;
}