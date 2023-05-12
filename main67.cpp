/*
    Name: Michelle_Silva, 5006988436, CS135_1021, Lab#8A
    Description: practice using basic input/output and making user defined functions
    Input: user/keyboard variables
    Output: display outputting variables
*/
#include <iostream>
#include <iomanip>

using namespace std;
int getIntegerInput(string prompt, int min, int max)
{
    int userInput = 0;
    bool flag = true;
    while (flag)
    {
        // Use prompt as a prompt to the user
        cout << prompt;
        // Int input from the user
        cin >> userInput;
        if (userInput < min || userInput > max)
        {
            cout << endl;
            cout << "Error: Invalid input!\n";
            // ERROR
            cin.clear();
            cin.ignore(100, '\n');
        }
        else
        {
            flag = false;
        }
    }
    return userInput;
}
// ***************************************************************
char getCharacterInput(string prompt) {
    cout << prompt;
    char userInput = {};
    cin >> userInput;
    return userInput;
}
// **************************************************************
void writeUpsideDownTriangle(int size, char character) {
    // For Loop for first triangle output
    // Star Patterns
    // Upside down triangle
    cout << endl;
    for (int outputCount = size; outputCount >= 1; outputCount--)
    {
    for (int starsAgain = 1; starsAgain <= outputCount; starsAgain++)
    {
            cout << character;
            // ties to "*"
    }
    cout << endl;
    }
}
// **************************************************************
void writeRightsideUpTriangle(int size, char character) {
    // While Loop for second triangle output
    // Star Patterns
    // Right triangle

    int outputCount = 1;
    while (outputCount <= size)
    {
    int numberOfStars = 1;
    // shows the number of stars
    while (numberOfStars <= outputCount)
    {
            cout << character;
            numberOfStars++;
    }
    outputCount++;
    cout << endl;
    // next line
    }
}
    // **************************************************************
    // Main function
    int main()
{

    // Minimums/maximums
    const int MIN = 2;
    const int MAX = 20;
    // Prompt for integer input
    string prompt1 = "Enter a count between " +
                     to_string(MIN) + " and " +
                     to_string(MAX) + "\n**";
    // Prompt for character input
    string prompt2 = "\nEnter a character\n**";

    // Get size of triangle
    int size = getIntegerInput(prompt1, MIN, MAX);
    // Get character to use when printing triangle
    char character = getCharacterInput(prompt2);

    // Write both triangles
    writeUpsideDownTriangle(size, character);
    writeRightsideUpTriangle(size, character);
    cout << endl;

    // Terminate the program
    return 0;
}