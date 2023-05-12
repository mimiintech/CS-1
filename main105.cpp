/*
    Name: Michelle_Silva, 5006988436, CS135_1021, SP23-Assign 7
    Description: basic input/output
    Input: user/keyboard variables
    Output: display outputting variables
*/
/*
Header comment goes here
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

/* DO NOT CHANGE ANYTHING IN THE PROTOTYPES
   CHANGING ANYTHIN IN THE THESE WILL
   RESULT IN RECEIVING A SCORE OF ZERO
   FOR THIS ASSIGNMENT
*/
// function prototypes
// COMPLETED
void showMenu();
// fills the arrays with data from files
bool readIntoArrays(string filename, string items[], double retails[],
                    double costs[], int quantities[], int size);
// returns the most popular item in terms of sale quantity
string mostPopularItem(string items[], int quantities[], int size);
// returns the item that has the highest profit margin
// profit = retail - cost
string mostProfitablItem(string items[], double retails[],
                         double costs[], int size);
// shows all items on the screen, check assignment document for spacing
void showItems(string items[], double retails[], double costs[],
               int quantities[], int size);
// returns the item that generated the most profit
// generated profit = (retail - cost) * quantity sold
string generatedMostProfit(string items[], double retails[],
                           double costs[], int quantities[], int size);
// **********************************
// ******************************************
int main(int argc, char *argv[])
{
    /*
make sure to handle the no argument and
too many arguments cases here. Terminate
the application when those are detected.
*/
    // Check if there are too many arguments
    // less than 2 or greater than 2
    if (argc > 2)
    {
        cout << "Too Many Arguments!" << endl;
        return 0;
        // terminates
    }

    if (argc < 2)
    {
        cout << "Must enter data file name!" << endl;
        return 0;
    }

    string filename = argv[1];
    /* get it from the command line arguments*/;
    const int size = 10;
    // parallel arrays to store data
    string items[size] = {""};
    double retails[size] = {0.0};
    double costs[size] = {0.0};
    int quantities[size] = {0};

    // trying to read data into arrays
    bool fileOpenend = readIntoArrays(filename, items, retails, costs,
                                      quantities, size);
    /* use the bool above to terminate the application
     if the file was not opened. */

    if (!fileOpenend)
    {
        cout << "File can not be found!" << endl;
        cout << "Check filename and try again!" << endl;
        return 0; 
    }

    cout << "Openning " << filename << endl;
    int choice = 0;
    bool flag = false;
    cout << "--- Welcome to the sales data analyzer ---\n";
    // ************************************
    // *****************************
    // COMPLETED
    /* DO NOT CHANGE ANYTHING IN THIS LOOP
       CHANGING ANYTHIN IN THE LOOP WILL
       RESULT IN RECEIVING A SCORE OF ZERO
       FOR THIS ASSIGNMENT
    */
    do
    {
        if (flag)
        {
            cin.clear();
            cin.ignore(100, '\n');
            flag = false;
        }
        showMenu();
        cout << "Select from the menu above:\n";
        cin >> choice;
        if (cin.fail() || choice < 1 || choice > 5)
        {
            cout << "Invalid selection!\n";
            flag = true;
            continue;
        }
        switch (choice)
        {
        case 1:
            showItems(items, retails, costs, quantities, size);
            break;
        case 2:
            cout << "Most popular item is: "
                 << mostPopularItem(items, quantities, size) << endl;
            break;
        case 3:
            cout << "The with highest profit margin is: " 
            << mostProfitablItem(items, retails, costs, size) << endl;
            break;
        case 4:
            cout << "The item that generated most profit is: "
                 << generatedMostProfit
                 (items, retails, costs, quantities, size)
                 << endl;
            break;
        case 5:
            cout 
            << "--- Thank you for using the sales data analyzer! ---\n";
            return 0;
        }
    } while (cin.fail() || choice != 5);
    return 0;
}
// // ******************************
// *****************************************
// Implement the functions here
// USE FUNCTION PROTOTYPES
// SHOWMENU OPTIONS

void showMenu()
{
    cout << "1. Show all items." << endl;
    cout << "2. Show most popular item." << endl;
    cout << "3. Show item with highest profit margin." << endl;
    cout << "4. Show item that generated most profit." << endl;
    cout << "5. Exit." << endl;
}
// // ************************
// ************************************************
bool readIntoArrays(string filename, string items[], double retails[],
                    double costs[], int quantities[], int size) 
{
    ifstream reader(filename);
    // reads the file - filename
    if (!reader.is_open())
    {
        cout << "Check filename and try again!" << filename << endl;
        return false;
    }
// ERROR OPENING THE FILE - FILENAME
// to read in the file
string line;
// to extract values
// from the line
// data is separated by commas
int counter = 0;
getline(reader, line);
// for the first line
while (getline(reader, line)) 
// skips the first line
{
        // It is first read as strings
        // FROM THE CSV FILES
        // SEPARATE THE SUBSTRINGS
        // get item name up until you find a comma
        string itemsString = line.substr(0, line.find(","));
        // update the line from everything after the comma
        line = line.substr(line.find(",") + 1);
        // get retail name up until you find a comma
        string retailsString = line.substr(0, line.find(","));
        // update the line from everything after the comma
        line = line.substr(line.find(",") + 1);
        // get cost string up until you find the next comma
        string costsString = line.substr(0, line.find(","));
        // update the line from everything after the comma
        line = line.substr(line.find(",") + 1);
        // get quantity name up until the end of the line
        string quantityString = line.substr(0, line.length());

        // convert the string values to appropriate data types
        // double changedItems = stod(itemsString);
        double changedRetails = stod(retailsString);
        double changedCosts = stod(costsString);
        int changedQuantity = stoi(quantityString);

        // store the converted values into arrays
        items[counter] = itemsString;
        retails[counter] = changedRetails;
        costs[counter] = changedCosts;
        quantities[counter] = changedQuantity;
        counter++;
}
return true;
}
// // ***********************************
// *************************************
string mostPopularItem(string items[], int quantities[], int size) {
// return the name of the most popular item based on the sales quan5ty.
int popularItem = 0;
for (int i = 1; i < size; i++)
{
        if (quantities[i] > quantities[popularItem])
        {
            popularItem = i;
    }
}
return items[popularItem];
}
// // ***************************
// *********************************************
string mostProfitablItem
(string items[], double retails[], double costs[], int size) {
// return the name of the item that has the highest profit margin.
// the retail price of the item minus the item’s cost.

int highProfitItem = 0;
double result = 0;
double resultAgain = 0;
for (int i = 0; i < size; i++)
{
    resultAgain = retails[i] - costs[i];
    if (resultAgain >= result)
    {
            highProfitItem = i;
            result = resultAgain;
    }
}
return items[highProfitItem];
}
// // ************************************
// ************************************
string generatedMostProfit(string items[], double retails[],
double costs[], int quantities[], int size) {
// string items[size] = {""};
// return the name of the item that generated the most profit.
int nameOfItem = 0;
// // calculate the generated profit by mul5plying the 
// quan5ty sold by the profit margin for each item.
double profitMargin = 0;
profitMargin = (retails[0] - costs[0]);
double genProfit = (quantities[0] * profitMargin);
for (int i = 1; i < size; i++)
{
    double result= (retails[i] - costs[i]);
    double resultAgain = (quantities[i] * result);
    if (resultAgain > genProfit)
    {
        nameOfItem = i;
        genProfit = resultAgain;
    }
}
return items[nameOfItem];
}
// // *************************************
// ***********************************
void showItems
(string items[], 
double retails[], 
double costs[], 
int quantities[], int size)
{

    cout << left 
    << setw(25) 
    << "Item" 
    << setw(16)  
    << "Retail" 
    << setw(16) 
    << "Cost" 
    << setw(16) 
    << "Quantity" << endl;

for (int i = 0; i < size; i++)
{
    cout << left 
    << setw(25) 
    << items[i] 
    << "$" << setw(15) 
    << retails[i] << "$" 
    << setw(15) << costs[i] 
    << setw(15) << quantities[i] 
    << endl;
}
cout << endl;
}
// // ***************************************
// *********************************
