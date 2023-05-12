

#include <iostream>

using namespace std;

int main() {

    int input = 0;


    do {
    cout << "Enter a count between 2 and 10000";
    cout << "**" << endl;
    cin >> input;
    cout << input << " ";
    ++input;
    } while (input < 1 || input >= 10000);

    return 0;
}