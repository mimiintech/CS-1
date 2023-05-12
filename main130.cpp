/*
    Name: Michelle_Silva, 5006988436, CS135_1021, #10B
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

// 50 purchases
const int PURCHASES = 10;

// Create a struct to hold information on purchases
struct PurchaseType {
    string customerID; 
    string productName; 
    double price;
    int qtyPurchased;
    double taxRate;
};
// ***********************************************************
// NUMBER ONE
void openFile(ifstream &iFile, string prompt)
{
    bool flag = true;
    do
    {
        cout << prompt;
        cout << "**";
        string fileName;
        cin >> fileName;
        cout << endl;
        iFile.open(fileName);
        if (iFile.fail())
        {
            cout << "Error: Invalid File" << endl;
            flag = true;
            iFile.clear();
            cin.ignore(100, '\n');
        }
        else
        {
            flag = false;
        }
    } while (flag);
}
// ***********************************************************
void readFile(ifstream &iFile, PurchaseType purchases[])
{
    // USE str.find() str.substr()
    string line;
    int counter = 0;
    // to extract values from the line
    // Until eof is hit & receives iFile
    while (getline(iFile,line) && !iFile.eof())
    {

        purchases[counter].customerID = line.substr(0, line.find(","));
        line = line.substr(line.find(",") + 1);
        purchases[counter].productName = line.substr(0, line.find(","));
        line = line.substr(line.find(",") + 1);

        string price = line.substr(0, line.find(","));
        line = line.substr(line.find(",") + 1);

        string qty = line.substr(0, line.find(","));
        line = line.substr(line.find(",") + 1);

        string tax = line.substr(0, line.find(","));
        line = line.substr(line.find(",") + 1);

        // convert the string values to appropriate data types
        double changedP = stod(price);
        int changedQ = stoi(qty);
        double changedTR = stod(tax);

        // store values into arrays
        purchases[counter].price = changedP;
        purchases[counter].qtyPurchased = changedQ;
        purchases[counter].taxRate = changedTR;
        counter++;
    }
}
// *************************************************************
void printPurchaseData(PurchaseType purchases[], int size)
{
    // calculate the total price for
    // each product purchased by multiplying
    // the price of each product by the
    // quantity purchased, and then the (tax rate + 1).
    double maxTotal = 0.0;
    // track of each total found and
    // outputting the average total at the end of the table.
    double average = 0.0;

// counter
    int uniqueCustomers = 0;
// customers are a string so
  string customerID = " ";
    // ************************************************************************
    // HEADER
  cout << "+-------------+--------------+-------+----------+----------+--------+" << endl;
  cout << "| Customer ID | Product Name | Price | Quantity | Tax Rate | Total  |" << endl;
  cout << "+-------------+--------------+-------+----------+----------+--------+" << endl;

  // **************************************************
  for (int i = 0; i < size; i++)
  {
        // calc the total price
        double totalPrice = purchases[i].price * purchases[i].qtyPurchased
         * (purchases[i].taxRate + 1);
        maxTotal += totalPrice;
// rack of the count of unique customers and 
// outputting the total unique customers 
 if (customerID != purchases[i].customerID)
//  not 50 but 4
    {
            customerID = purchases[i].customerID;
            // still 50?
            uniqueCustomers++;
            // counter
    }
// LOOPS FROM WITHIN
    cout << fixed << setprecision(2)
         << "| " << setw(11) << right << purchases[i].customerID
         << " | " << setw(12) << right << purchases[i].productName

         << " | " << setw(5) << right << purchases[i].price
         << " | " << setw(8) << right << purchases[i].qtyPurchased
         << " | " << setw(8) << right << (purchases[i].taxRate * 100)
        //  << " |  " << right << totalPrice << " |" << endl;
    << " | " << setw(6) << totalPrice << " |" << endl;
    }
average = maxTotal/size;
// *************************************************************
    // FOOTER
cout << "+-------------+--------------+-------+----------+----------+--------+" << endl;
cout << "Unique users:  " << uniqueCustomers << endl;
cout << "Average total: $" << average;
}
// // ***********************************************************
// NUMBER 2
int main()
{
    // MAKING CALLS TO THE FUNCTION
    PurchaseType purchases[PURCHASES];
    // open file
    // File to read data from
    ifstream reader;
    openFile(reader, "Enter file name\n");
    // the reader & the prompt
    readFile(reader, purchases);
    // the reader & the array
    printPurchaseData(purchases, PURCHASES);
    // the array & the size
    reader.close();
    // close the file
    return 0;
    // terminate
}

