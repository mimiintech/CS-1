#include <iostream>


using namespace std;

int main() {

// Iteration

// int x = 0;

// while (x <= 10) {
//     cout << x++ << endl;
// }



// TEST QUESTION
// string name = "john doe";
// cout << "Enter a name:\n";
// getline(cin, name);


// int index = 0;
// bool isValidName = true;
// name[0] = toupper(name[0]);
// while (index < name.length()) {
//     // cout <<char(toupper(name [index])) << endl;
//     name[index] = toupper(name[index]);
//     if (name[index] >= 33 && name[index] <= 64) {
//         isValidName = false;
//     }
//     index++;
// }
// if (isValidName) {

// cout << "Result: " << name << endl;
// } else {
//     cout <<"Invlaid name!\n";
// }


// STAR COUNT

int starCount;

int width, height;

cout << "Enter number of stars:\n";

cout << "Enter width:\n";

cin >> starCount;

cout << "Enter height\n";

cin >> width;

cin >> height;

int temp = width;
// to reset the width

while (height > 0) {
    while (width > 0) {
        cout << '*';
        width--;
    }
    // to reset the width
    width = temp;
    // cout << endl;
    height--;
}


while (starCount > 0) {
    cout << '*';
    starCount--;
}

cout << endl;







// TEST QUESTION

// bool flag = false;

// int a,b;

// do {
//     cout <<"Enter a value for 'a':\n";
//     cin >> a;
//     if(cin.fail()) { 
//         flag = true;
//         cin.clear();
//         cin.ignore(100,'\n');
//     } else {
//         flag = false;
//     }
// } while (flag);


// do {
//     cin.clear();
//     cin.ignore(100, '\n');
//     cout <<"Enter a value for 'b'\n";
//     cin >> b;
// }
// while (cin.fail() || b == 0);

// cout <<"The result is: " << a/b << endl;
return 0;
}


