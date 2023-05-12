/*
    Name: Michelle_Silva, 5006988436, CS135_1021, SP23-ASSIGN 5
    Description: Currency Conversion
    Input: user/keyboard variables
    Output: display outputting variables
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

// currency
const double EUR = 1.0828;
const double GBP = 1.2048;
const double JPY = 0.0076;
const double CNY = 0.1276;
const double INR = 0.01212;
const double FEE = 0.01;
// *******************************************************
int main()
{
    // Open file
    ifstream reader;
    string fileName;
    // User input
// *******************************************************
// do-while loop to keep looping 
// for file error
    do
    {
        cout << "Enter transaction file: ";
        cin >> fileName;
        cout << endl;

        reader.open(fileName);

        if (!reader.is_open() || reader.fail())
        {
            cout << "File not found!" << endl;
            reader.clear(); // Clear the error flag
        }

    } while (!reader.is_open() || reader.fail());
// **********************************************************
// VARIABLES
    string currencyCode;
    double amount = 0.0;
// ***********************************************************
// VARIABLES
    double amountOfUSD = 0.0;
    int linePosition = 0;
    int numberOfTransactions = 0;
    double totalUSD = 0.0;
    double totalProfit = 0.0;
    double totalTransactionFee = 0.0;
    // *******************************************************
        while (!reader.eof())
        // END OF FILE
    {
        reader >> currencyCode;
        if (currencyCode == "") {
            continue;
        }
        reader >> amount;
        if (reader.eof())
        {   
            continue;
        }
        linePosition++;
        // FAILS OR AMOUNT LESS THAN 0
        if (amount < 0)
            {
                reader.clear();
                reader.ignore(100, '\n');
                // CLEAR/IGNORE
                cout << 
                // PRINT
                "Transaction " 
                << linePosition 
                << " contains an invalid amount" 
                << endl;
            // ***************************************
                numberOfTransactions--;
                 amountOfUSD = 0;
                 currencyCode = "";
        }
        else if (reader.fail()) {
                 reader.clear();
                 reader.ignore(100, '\n');
                 cout <<
                     // PRINT
                     "Transaction "
                      << linePosition
                      << " contains an invalid amount"
                      << endl;
                 numberOfTransactions--;
                 amountOfUSD = 0;
                 currencyCode = "";
        }
    // *******************************************************
    // CURRENCIES
        else if 
        (currencyCode == "GBP")
            {
                amountOfUSD = amount * GBP;
            }
        else if 
        (currencyCode == "EUR")
        {
            amountOfUSD = amount * EUR;
        }
        else if
         (currencyCode == "CNY")
        {
            amountOfUSD = amount * CNY;
        }
        else if
         (currencyCode == "JPY")
        {
            amountOfUSD = amount * JPY;
        }
        else if 
        (currencyCode == "INR")
        {
            amountOfUSD = amount * INR;
// *************************************************************
        } else {  
            cout
            // PRINT
             << "Transaction " 
             << linePosition 
             << " has unknown currency type" 
             << endl;
            // ****************************************
            numberOfTransactions--;
            amountOfUSD = 0;
        }
    // ************************************************************
        numberOfTransactions++;
        totalUSD += amountOfUSD;
        totalTransactionFee = totalUSD * FEE;
        totalProfit += (amountOfUSD - totalTransactionFee);
    // *************************************************************
}
// PRINT STATEMENTS
    cout << endl;
    cout << fixed 
    << setprecision(2);
    cout << "Transactions made                     "
         << numberOfTransactions
         << endl;
    cout << "Total exchanges made          "
         << "$  "
         << totalUSD << endl;
    cout << "Profit made                   "
         << "$    "
         << totalTransactionFee << endl;

    // CLOSE FILE
    reader.close();
    return 0;
}
