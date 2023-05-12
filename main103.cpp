/*
    Name: Michelle_Silva, 5006988436, CS135_1021, #10A
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

// struct to read data into.
struct studentType {
    // // Create a struct to hold information on students
    string firstName;
    string lastName;
    int grade;
    char letterGrade;
};
// ****************************************************************
void getStudentData(studentType &student) {
// passes as reference
// instances
    cout << "Enter a first name" << endl;
    cout << "**";
    cin >> student.firstName;
    // passes the parameter
    cout << endl;
    bool flag = true;
    cout << "Enter a last name" << endl;
    cout << "**";
    cin >> student.lastName;
    cout << endl;
    // do-while loop
    do
    {
        cout << "Enter a grade" << endl;
        cout << "**";
        cin >> student.grade;
        cout << endl;
        if (student.grade < 0 || student.grade > 4 || cin.fail())
        {
            cout << "Error: Invalid grade" << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(100, '\n');
        }
        else
        break;
    } while (flag);
}
// // ****************************************************************
void getLetterGrade(studentType &student){
    // use char letter grade
    // passses as reference
    //    if (student.grade >= 90)
    //        student.letterGrade = 'A';
    //    else if (student.grade >= 80)
    //        student.letterGrade = 'B';
    //    else if (student.grade >= 70)
    //        student.letterGrade = 'C';
    //    else if (student.grade >= 60)
    //        student.letterGrade = 'D';
    //    else
    //        student.letterGrade = 'F';
    // Range percentage between 0 to 100
    switch (student.grade)
    {
    case 0:
        student.letterGrade = 'F';
        break;
    case 1:
        student.letterGrade = 'D';
        break;
    case 2:
        student.letterGrade = 'C';
        break;
    case 3:
        student.letterGrade = 'B';
        break;
    case 4:
        student.letterGrade = 'A';
        break;
    default:
        cout << "Error: \'" << student.grade << "\'"
             << " is not a valid letter grade" << endl;
    }
}
// // ****************************************************************
void printStudentData(studentType student) {
    cout << "Data Entered\n";
    cout << setw(20) << left << "  student.firstName"
         << "  = " << student.firstName << endl;
    cout << setw(20) << left << "  student.lastName"
         << "  = " << student.lastName << endl;
    cout << setw(20) << left << "  student.grade"
         << "  = " << student.grade << endl;
    cout << setw(20) << left << "  student.letterGrade"
         << " = " << student.letterGrade;
}

// cout << "student.lastName" << " = " << student.lastName << endl;
// cout << "student.grade" << " = " << student.grade << endl;
// cout << "student.letterGrade" << " = " << student.letterGrade << endl;
// // // ****************************************************************
int main()
{
       // Creating a Struct Instance
       // contain variable declarations
       // function calls
       studentType student;
    //    name.firstName = "John";
    //    name.lastName = "Smith";
    //    name.grade;
    //    name.letterGrade;

    //    studentType nameAgain;
    //    nameAgain.firstName = "Pebbles";
    //    nameAgain.lastName = "Flintstone";
    //    nameAgain.grade;
    //    nameAgain.letterGrade;

    //    studentType student;
       getStudentData(student);

               // Access information from the student struct
               // Print the structure members
       getLetterGrade(student);
       printStudentData(student);
    //     cout<< student.firstName 
    // << " " << student.lastName 
    // << " " << student.grade 
    // << name.letterGrade << "\n";
    //    cout << nameAgain.firstName
    //  << " " << nameAgain.lastName 
    //  << " " << nameAgain.grade 
    //  << nameAgain.letterGrade << "\n";
       // STRUCT BASICS
       // groups together releated items of different data types
       // STRUCTS IN FUNCTIONS
       // Functons can return structs
       // Passed by value or reference parameters
       // ARRAYS OF STRUCTS
       // simpler to hold the
       // muti. instances in an array
       // rather than in multiple variables
       return 0;
}
