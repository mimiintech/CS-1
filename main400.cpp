/*
Name: Michelle_Silva, 5006988436, CS135_1021, SP23 Assign 8
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
// STEP #ONE
const int ARRAYSIZE = 20;
// ***************************
// **********************************
// Structs and Attributes
struct Transaction
{
    string transactionType;
    // withdrawal & deposit
    double transactionAmount;
};
struct Account
{
    int accountNumber;
    int pinCode;
    double accountBalance;
    Transaction transactions[ARRAYSIZE];
    // the array size is 20
    int counterOfTransactions;
    // add the counter within the struct
};
// ***********************************************
// ***********************************************
// MENU VOID FUNCTION
void showMenu()
{
    cout << "Select from menu:" << endl;
    cout << "1. Withdraw." << endl;
    cout << "2. Deposit." << endl;
    cout << "3. Show balance." << endl;
    cout << "4. Show transactions." << endl;
    cout << "5. Cancel." << endl;
}
// ***********************************************
// ***********************************************
// WITHDRAW FUNCTION
bool withdraw(Account &myArray, int &recent)
{
    double take = 0.0;
    cout << "Enter amount to withdraw: " << endl;
    cout << "$ ";
    cin >> take;
    // Check for insufficient balance
    if (take <= myArray.accountBalance)
    {
        // SUBTRACTS
        myArray.accountBalance = myArray.accountBalance - take;
        // cout << "Large enough!" << endl;
        // Declare a instance of the Transaction struct
        // ADDING A WITHDRAW TRANSACTION INSTANCE
        myArray.transactions[recent].transactionAmount = take;
        myArray.transactions[recent].transactionType = "withdrawal";
        recent++;

        // Increment Transactions
        myArray.counterOfTransactions++;
        // PRINTS THE CURRENT BALANCE
        cout << "New Balance: $" << myArray.accountBalance << endl;
    }
    else if (take >= myArray.accountBalance)
    {
        cout << "Insufficient balance!" << endl;
        cout << "Transaction cancelled." << endl;
    }
    return 0;
}
// ***********************************************
// ***********************************************
// DEPOSIT FUNCTION
bool deposit(Account &myArray, int &user)
{
    double insert = 0.0;
    cout << "Enter amount to deposit: " << endl;
    cout << "$ ";
    cin >> insert;
    // ADD, INSTEAD OF SUBTRACT
    myArray.accountBalance = myArray.accountBalance + insert;
    // Declare a instance of the Transaction struct
    // ADDING A WITHDRAW TRANSACTION INSTANCE
    myArray.transactions[user].transactionAmount = insert;
    myArray.transactions[user].transactionType = "deposit";
    // cout << myArray.transactions[user].transactionAmount << endl;
    // cout << myArray.transactions[user].transactionType << endl;
    user++;
    // Increment Transactions
    myArray.counterOfTransactions++;
    // PRINTS THE CURRENT BALANCE
    cout << "New Balance: $" << myArray.accountBalance << endl;
    return 0;
}
// ***********************************************
// ***********************************************
// SHOW BALANCE FUNCTION
bool showBalance(Account &myArray)
{
    cout << "Current balance: "
         << "$" << fixed << setprecision(2)
         << myArray.accountBalance << endl;
    return 0;
}
// ***********************************************
// ***********************************************
// SHOW TRANSACTIONS FUNCTION
bool showTransactions(Account &myArray)
{
    // IF THERE'S NO PREVIOUS TRANSACTIONS
    // PRINT NO TRANSACTIONS
    if (myArray.counterOfTransactions == 0)
    {
        cout << "No recent transactions found" << endl;
        return false;
    }
    //  TEST 7 PASSES KEEP THIS CODE!
    for (int i = 0; i < myArray.counterOfTransactions; i++)
    {
        cout << i + 1 << "- Type: "
             << myArray.transactions[i].transactionType
             << ", Amount: $" << fixed << setprecision(2)
             << myArray.transactions[i].transactionAmount << endl;
    }
    return 0;
}
// *****************************************************
bool anotherTransaction(int option)
{
    bool question = true;
    while (question)
    {
        char choice = '\0';
        cout << "Would you like another transaction? (y/n)" << endl;
        cin >> choice;
        if (choice == 'n')
        {
            cout << "Thank you!" << endl;
            return false;
        }

        if (choice == 'y')
        {
            return true;
        }
        cout << "Thank you!" << endl;
        return false;
    }
    return false;
}
// ***********************************************
// ***********************************************
// MENU OPTIONS, ACCOUNT #, PIN #
// STEP #2
// Set up the application
int main()
{
    // CREATE 5 BANK ACCOUNT INSTANCES
    Account myArray[5];
    // KEEPS TRACK OF THE transaction array
    int recentTransactions = 0;
    // ACCOUNT #, ACCOUNT BALANCE, PIN CODE
    myArray[0].accountNumber = 111000;
    myArray[0].counterOfTransactions = 0;

    myArray[1].accountNumber = 111001;
    myArray[1].counterOfTransactions = 0;

    myArray[2].accountNumber = 111002;
    myArray[2].counterOfTransactions = 0;

    myArray[3].accountNumber = 111003;
    myArray[3].counterOfTransactions = 0;

    myArray[4].accountNumber = 111004;
    myArray[4].counterOfTransactions = 0;

    // INIATIZED COUNTEROFTRANSACTIONS
    // HERE SINCE THERE'S NO EXTENSION

    myArray[0].accountBalance = 65938.91;
    myArray[1].accountBalance = 100.53;
    myArray[2].accountBalance = 25.13;
    myArray[3].accountBalance = 100983.11;
    myArray[4].accountBalance = 83764.17;
    myArray[0].pinCode = 123456;
    myArray[1].pinCode = 123456;
    myArray[2].pinCode = 123456;
    myArray[3].pinCode = 123456;
    myArray[4].pinCode = 123456;
    // *****************************************
    // STEP #3
    // Entering and Validating an Account Number
    cout << endl;
    cout
        << "-------- Welcome to the Banking Application --------"
        << endl;
    cout << endl;
    int input = 0;
    bool continueTransaction = true;
    bool pin = false;
    bool found = false;
    // char selection = 'n';
    bool check = false;

    // check for account number
    do
    {
        do
        {
            if (check)
            {
                cout << "Enter account number:" << endl;
                cin >> input;
            }
            else
            {

                cout << "Enter account number or -1 to exit:" << endl;
                cin >> input;
            }

            if (input == -1)
            {
                cout << "Thank you!" << endl;
                return 0;
            }

            string str1 = to_string(input);
            if (str1.length() != 6 || cin.fail())
            {
                cout << "Account number must consist of 6 digits" << endl;
                found = false;
                check = true;
                cin.clear();
                cin.ignore(100, '\n');
                continue;
            }

            int cur = 0;
            for (int i = 0; i < 5; i++)
            {
                if (myArray[i].accountNumber == input)
                {
                    found = true;
                    check = true;
                    cur = i;
                    break;
                }
            }
            if (!found)
            {
                cout << "Incorrect account number!" << endl;
                cout << "Try again or enter -1 to exit" << endl;
                found = false;
                check = false;
                continue;
            }

            // check for pin code
            // STEP #4
            // Entering and Validating the Pin Code
            int attempts = 0;
            string userInput;
            bool validInput = false;
            do
            {
                cout << "Enter pin:" << endl;
                cin >> userInput;

                // check if it is contain only digits
                for (unsigned int i = 0; i < userInput.length(); i++)
                {
                    if (!isdigit(userInput[i]) || cin.fail())
                    {
                        pin = false;
                        validInput = false;
                        break;
                    }
                    validInput = true;
                }
                if (!validInput)
                    cout << "Pin should contain numbers only" << endl;
                else
                {
                    if (myArray[cur].pinCode == stoi(userInput))
                    {
                        pin = true;
                        break;
                    }
                    cout << "Incorrect PIN code!" << endl;
                    pin = false;
                    attempts++;
                    continue;
                }

            } while (!pin && attempts < 3);

            if (attempts >= 3)
            {
                cout
                    << "You have exceeded the number ";
                cout
                    << "of allowed pin attempts"
                    << endl;
                cout << "See a banker to complete your transaction"
                     << endl;
                cout << "Thank you!"
                     << endl;
                return 0;
            }

            showMenu();
            int option = 0;
            cin >> option;
            switch (option)
            {
            case 1:
                withdraw(myArray[cur], recentTransactions);
                break;
            case 2:
                deposit(myArray[cur], recentTransactions);
                break;
            case 3:
                showBalance(myArray[cur]);
                break;
            case 4:
                showTransactions(myArray[cur]);
                break;
            case 5:
                //    TEST 3 PASSES WITH THIS CODE!
                //    continueTransaction = anotherTransaction(option);
                break;
            }

            // ask for another transaction
            // use function here
            continueTransaction = anotherTransaction(option);

            if (!continueTransaction)
            {
                return 0;
            }
        } while (!found);
    } while (continueTransaction);
}