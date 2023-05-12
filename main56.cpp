/*
    Name: Michelle_Silva, 5006988436, CS135_1021, SP23-Assign 6
    Description: basic input/output 
    Input: user/keyboard variables
    Output: display outputting variables
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;
const int SIZE = 100;
// ********************************
// ***************************************
int main()
{

    ifstream reader;
    string fileName;
    // **************************************
    // Read in is the currency conversion file (.csv file)
    double exchangeRates[SIZE];
    string currencyCodes[SIZE];
    // *************************************
    // second file you will read in is an airport codes to currency file
    string airportToCurrency[SIZE][2];
    // Where SIZE is a constant that 
    // contains the value 100 which represents the max capacity
    // *********************************************************************
    // READS
    // Read in is the currency conversion file (.csv file)
    // currencyCodes.csv
    do
    {
        cout << "Enter currency conversion file: ";
        cin >> fileName;

        reader.open(fileName);

        if (!reader.is_open() 
        || reader.fail())
        {
            cout << "Invalid filename" << endl;
            reader.clear(); // Clear the error flag
        }
// ***************************************************************
    } while (!reader.is_open() 
    || reader.fail());
    string line;
    int linePosition = 0;

    while (getline(reader, line))
    {
        stringstream ss(line);
        string currencyCode;
        double exchangeRate = 0.0;
// ****************************************************
        if (getline(ss, currencyCode, ',') 
        && ss >> exchangeRate)
        {
            currencyCodes[linePosition] 
            = currencyCode;
            exchangeRates[linePosition] 
            = exchangeRate;
            linePosition++;
        }
    }
    reader.close();
    // *************************************************************************
    // READS
    // second file you will read in is an airport codes to currency file
    // airports.csv 
    do
    {
        cout << "Enter airport codes file: ";
        cin >> fileName;
        reader.open(fileName);

        if (!reader.is_open() 
        || reader.fail())
        {
            cout << "Invalid filename" 
            << endl;
            reader.clear(); // Clear the error flag
        }
    }
// *************************************************
    while (!reader.is_open() 
    || reader.fail());
    string position;
    int airportPosition = 0;
    while (getline(reader, position)) {
        stringstream ss(position);
        string airportCode;
        string airportCurrencyCode;
        if (getline(ss, airportCode, ',') 
        && ss >> airportCurrencyCode)
        {
            airportToCurrency[airportPosition][0] 
            = airportCode;
            airportToCurrency[airportPosition][1] 
            = airportCurrencyCode;
            airportPosition++;
        }
    }
    reader.close();
    // *****************************************************************
    // READS
    // third input file you read in a filename form standard input
    // and re-prompt if the file is not found
    // Read in Transaction file
    do
    {
        cout << "Enter transactions file: ";
        cin >> fileName;
        cout << endl;

        reader.open(fileName);

        if (!reader.is_open() 
        || reader.fail())
        {
            cout << "Invalid filename" 
            << endl;
            reader.clear(); // Clear the error flag
        }

    } while (!reader.is_open() 
    || reader.fail());
    // ***********************************************
    // // Create a new file to output CSV
    ofstream trans;
    trans.open("output.csv");
// ************************************************************
    string placement;
    int transCounter = 1;
    while (getline(reader, placement))
    {
        stringstream ss(placement);
        string airPortCode;
        string amount;
        getline(ss, airPortCode, ',');
        getline(ss, amount);

        double value = 
        strtod(amount.c_str(), NULL);

        trans << "Transaction " 
        << transCounter << ",";
// *****************************************
// *****************************
// IF THE ORGINAL AMOUNT IS INVALID
        if (value <= 0)
        {
            trans << "Invalid amount" 
            << endl;
            transCounter++;
            continue;
        }
// **************************
// ********************************************************
        string currency;
        bool found = false;

        // Using the airCode string obtained in step 6
        for (int i = 0; i < airportPosition; i++)
        {
            // airPortCode
            // airportToCurrency
            if (airportToCurrency[i][0] == airPortCode)
            {
                currency 
                = airportToCurrency[i][1];
                found = true;
            }         
}  
// *********************************************
// *****************************
if (!found) {
    trans 
    << "Airport code not valid" 
    << endl;
    transCounter++;
    continue;
}
// ********************************************
// **********************
double rateExchange = 0.0;
    for (int b = 0; b < linePosition; b++)
    {
        if (currencyCodes[b] == currency) {
            rateExchange 
            = exchangeRates[b];
        }
    }
// *****************************************************
double usd = rateExchange * value;
// *********************************
trans << fixed 
<< setprecision(2);
trans << value << " " 
<< currency << " = " 
<< usd  << " USD" << endl;
transCounter++;
    }
        return 0;
}