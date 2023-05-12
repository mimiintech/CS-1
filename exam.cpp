// MODULE-7-FUNCTIONS

void myFunction(int myArray[], int size)
{
    // Function code goes here
}
// CALL FUNCTION

int main()
{
    int myArray[5] = {1, 2, 3, 4, 5};
    // FIXED SIZE
    myFunction(myArray, 5); // Note: No [] after myArray
    // myFunction function and passing the myArray array as an argument, along with the size of the array, which is 5.
     return 0;
}

// 1-D arrays'
// SAME DATA TYPE
// (1-D) array is a collection of 
// variables of the same data type that are arranged in a single row or column.
int myArray[5];
// starts from 0 and goes up to the size of the array minus one.
myArray[0] = 1; // set the first element to 1
myArray[1] = 2; // set the second element to 2
myArray[2] = 3; // set the third element to 3
myArray[3] = 4; // set the fourth element to 4
myArray[4] = 5; // set the fifth element to 5

// A multidimensional array in C++ is an array
// that has more than one dimension.
// creates a 2-D integer array named myArray 
// that can store 3 rows and 4 columns:

int myArray[3][4];
// row, column

int myArray[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}};

// TO ACCESS 7
int x = myArray[1][2];
// Row 1, Column 3
//  To Modify
myArray[2][3] = 15;

// VECTORS AS FUNCTION PARAMETERS

void myFunction(vector<int> myVector)
{
     // function body
}
// vector<int> specifies that the parameter 
// myVector is a vector that stores integers.
void incrementVector(vector<int> &myVector)
{
     for (int i = 0; i < myVector.size(); i++)
     {
         myVector[i]++;
     }
}
// a function that accepts a vector
// as a parameter and modifies its contents:
// function called incrementVector
//  reference to a vector of integers myVector as input.
// this function is to increment every element of myVector by 1.
//  void, which means that it modifies the input vector myVector directly, without returning any value that can be used by the calling code.
vector<int> myVector = {1, 2, 3, 4};
incrementVector(myVector);

// Print the modified vector
for (int i = 0; i < myVector.size(); i++)
{
     cout << myVector[i] << " ";
}

// Passing by Value VS Passing by Reference
// When we pass an argument by value,
void foo(int x)
{
     x += 10;
}

int main()
{
     int a = 5;
     foo(a);
     cout << a; // Output: 5
     return 0;
}
//  the value of a remains 5 even after calling foo.
//  passing by value creates a copy of the variable

//  pass an argument by reference
void foo(int &x)
{
     x += 10;
}

int main()
{
     int a = 5;
     foo(a);
     cout << a; // Output: 15
     return 0;
}
// the value of a becomes 15 after calling foo.
// passing by reference passes the actual variable itself.
// Passing by reference allows the function to modify the original variable

// Local VS Global Variables
// Global variables are declared outside of any function, and can be accessed by any function in the program.
#include <iostream>
using namespace std;

int globalVariable = 10;

void foo()
{
     cout << "The value of the global variable is: " << globalVariable << endl;
}

int main()
{
     foo(); // Output: The value of the global variable is: 10
     return 0;
}

// Local variables, on the other hand, are declared inside a function, and can only be accessed within the block of code in which they are declared.
//  This means that the variable is only available for use within that specific 
// function and cannot be accessed or modified from any other function in the program.
#include <iostream>
using namespace std;

void foo()
{
     int localVariable = 5;
     cout << "The value of the local variable is: " << localVariable << endl;
}

int main()
{
     foo(); // Output: The value of the local variable is: 5
     return 0;
}
// LOCAL OR GLOBAL

include<iostream> 
int x;
// global: x
void function1(bool y)
{
     if (y)
     {
         int z;
        //  local
     }
     else
     {
         int w;
        //  local
     }
}

double b;
// global: b
void function2(int m)
{
     int q;
    //  local
}

// Automatic VS Static Variables
// Automatic variables are created every time the function is called and destroyed when the function's execution is finished.
// Static variables, on the other hand, are created once and only destroyed when the application finishes execution.

#include <iostream>

void foo()
{
     int automaticVar = 0;     // automatic variable
     static int staticVar = 0; // static variable

     automaticVar++;
     staticVar++;

     std::cout << "Automatic variable value: " << automaticVar << std::endl;
     std::cout << "Static variable value: " << staticVar << std::endl;
}

int main()
{
     foo(); // Output: Automatic variable value: 1, Static variable value: 1
     foo(); // Output: Automatic variable value: 1, Static variable value: 2
     foo(); // Output: Automatic variable value: 1, Static variable value: 3

     return 0;
}

// the foo() function has both an automatic variable and a static variable. 
// The automatic variable is created and destroyed each time the function is called, so its value is reset to 0 every time. 
// The static variable, however, is only created once and maintains its value between function calls,
//  so its value increments each time the function is called.

// Default Parameters
void greet(string name = "World")
{
     cout << "Hello, " << name << "!" << endl;
}

int main()
{
     greet();        // Output: Hello, World!
     greet("Alice"); // Output: Hello, Alice!
     return 0;
}

// Function Overloading
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
{
     return a + b;
}

// Function to add two floating-point numbers
float add(float a, float b)
{
     return a + b;
}

int main()
{
     int x = 3, y = 4;
     float p = 3.5, q = 4.5;

     cout << "Sum of integers: " << add(x, y) << endl;
     cout << "Sum of floats: " << add(p, q) << endl;

     return 0;
}
// The code does compile and works as expected. 
// It is an example of function overloading, where two functions have the same name "add" but different parameter types (int and float) 
// to handle different data types. The compiler is able to differentiate between the two functions based on the parameter 
// types used when calling the function.

// ***********************************************************************************************
// MODULE-6-Cmd Line Arg., Vectors, 2-D Arrays
// In C++, command line arguments are a way of passing parameters to a program when it is executed from the command line.
int main(int argc, char *argv[])

    myProgram arg1 arg2 arg3
    // the argc parameter will have a value of 4, and the argv array will contain the following values:
    argv[0] = "myProgram" argv[1] = "arg1" argv[2] = "arg2" argv[3] = "arg3"

// Vectors
// One of the main differences between vectors and arrays is 
// that arrays have a fixed size, while vectors can be resized during runtime.

#include <iostream>
#include <vector>
    using namespace std;

int main()
{
     vector<int> v;
     v.push_back(1);
     v.push_back(2);
     //  To add elements to a vector, you can use the push_back method.
     v.push_back(3);
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }
     return 0;
}

// This code creates an empty vector of integers, and then adds three elements to it using the push_back() method. 
// It then uses a for loop to iterate over the vector and print out its contents. The output of this program will be:
1 2 3

    // To declare an empty vector
    vector<datatype>name;
// If you want to create a vector with an initial size
vector<datatype> name(size);
// If you want to create a vector with an initial size and default values
vector<datatype> name(size, defaultValue);
// If you want to declare and initialize a vector at the same time
vector<datatype> name = {value1, value2, ...};
// To access the elements of a vector, you can use the same syntax as for arrays: name[index].
// To remove elements from a vector, you can use the erase method.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
     // Declare and initialize a vector
     vector<int> v = {1, 2, 3, 4, 5};

     // Accessing elements
     cout << "The element at index 0 is: " << v[0] << endl;
     cout << "The element at index 3 is: " << v[3] << endl;

     // Modifying elements
     v[1] = 6;
     v[4] = 7;
     cout << "The vector after modifying elements: ";
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }
     cout << endl;

     // Adding elements
     v.push_back(8);
     cout << "The vector after adding an element: ";
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }
     cout << endl;

     // Removing elements
     v.pop_back();
     cout << "The vector after removing the last element: ";
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }
     cout << endl;

     v.insert(v.begin() + 2, 9);
     cout << "The vector after inserting an element: ";
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }
     cout << endl;

     v.erase(v.begin() + 3);
     cout << "The vector after erasing an element: ";
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] << " ";
     }
     cout << endl;

     return 0;
}

// The element at index 0 is : 1 
// The element at index 3 is : 4 
// The vector after modifying elements : 1 6 3 4 7 
// The vector after adding an element : 1 6 3 4 7 8 
// The vector after removing the last element : 1 6 3 4 7 
// The vector after inserting an element : 1 6 9 3 4 7 
// The vector after erasing an element : 1 6 9 4 7

    // Iterating
    // Iterating over a vector in C++ allows you to access and process all of the elements in the vector


// For Loop
    vector<int>
        vec = {1, 2, 3, 4, 5};
    for (int i = 0; i < vec.size(); i++)
{
     cout << vec[i] << " ";
}
1 2 3 4 5

// Range-based Loop
    vector<int>
        vec = {1, 2, 3, 4, 5};
    for (int element : vec)
{
     cout << element << " ";
}
1 2 3 4 5

    // Accessing the last element:
    // You can access the last element of a vector using the vectorName[vectorName.size() - 1] syntax.
    // This is useful when you want to perform some operation on the last element of the vector.

    vector<int>
        vec = {1, 2, 3, 4, 5};
        int last_element = vec[vec.size() - 1];
        cout << "Last element of the vector: " << last_element << endl;
        Last element of the vector : 5

            // Arrays are more memory-efficient and faster to access than vectors,
            //  but vectors are more flexible and have associated methods for manipulating their data.

            // BUBBLE SORT
            // Bubble Sort is a simple sorting algorithm that compares adjacent elements
            // in an array and swaps them if they are in the wrong order.

            // PARALLEL ARRAYS
            // // Parallel arrays are a technique for storing and accessing
            // multiple data types by using multiple arrays, with each array storing a single data type.

        string names[] = {"Alice", "Bob", "Charlie"};
        int ages[] = {25, 30, 35};
        double salaries[] = {50000.0, 60000.0, 70000.0};

        cout << "Employee name: " << names[0] << endl;
        cout << "Employee age: " << ages[0] << endl;
        cout << "Employee salary: " << salaries[0] << endl;

        Employee name : Alice
                            Employee age : 25 Employee salary : 50000

    // multidimensional array in C++ 2D ARRAYS

        int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};

        for (int i = 0; i < 3; i++)
        {
        for (int j = 0; j < 2; j++)
     {
         cout << arr[i][j] << " ";
     }
        cout << endl;
        }
        1 2 3 4 5 6
            // ****************************************************************************************************
            // MODULE-5-ARRAYS & FILE IO
            // An array is a data structure that allows you to store multiple values of the same data type under a single variable name.
            string items[5];
            // 5 ELEMENTS
        items[0] = "bread";
        items[1] = "milk";
        items[2] = "eggs";
        items[3] = "butter";
        items[4] = "cheese";
        // INDEXES
    // OR
        string items[] = {"bread", "milk", "eggs", "butter", "cheese"};

        for (int i = 0; i < 5; i++)
        {
        cout << items[i] << endl;
        }
        // To print the items in the array, you can use a loop to iterate over each element and print it to the console.
        // To search for an item in the array, you can again use a loop to iterate over each element and compare it to the search term.
        string searchTerm = "milk";
        for (int i = 0; i < 5; i++)
        {
        if (items[i] == searchTerm)
        {
         cout << "Found " << searchTerm << " at index " << i << endl;
         break;
        }
        }
        // HOW TO ACCESS
        // You can access elements in an array using the array name and the element's index.
        array_name[index] 
        cout << friends[0] << " is my friend" << endl;
        friends[0] = "Mary";

        // Array's advantage

        // let's assume we have an array called friends with a size of 7, and we want to ask the user to input the names of each friend using a loop.
        for (int i = 0; i < 7; i++)
        {
        cout << "Please enter friend number " << i + 1 << endl;
        cin >> friends[i];
        }

        //  To find out the number of elements in an array, we can use the sizeof operator to get the total size of the array in bytes, 
        // and then divide it by the size of one element of the array to get the number of elements.
        int arraySize = sizeof(myArray) / sizeof(myArray[0]);

        // Array Errors

#include <iostream>
        using namespace std;

        int *createArray()
        {
        int myArray[3] = {1, 2, 3};
        return myArray; // ERROR: returning a pointer to a local variable
        }

        int main()
        {
        int myArray[5] = {10, 20, 30, 40, 50};

        // Error: Using an array to assign a value
        // myArray = {1, 2, 3, 4, 5};

        // Correct way to assign values to array elements
        myArray[0] = 1;
        myArray[1] = 2;
        myArray[2] = 3;
        myArray[3] = 4;
        myArray[4] = 5;

        // Error: Returning an array from a function
        // int* newArray = createArray();

        // Correct way to return a pointer to an array
        int *newArray = new int[3];
        newArray[0] = 4;
        newArray[1] = 5;
        newArray[2] = 6;

        // Error: Assuming that a function "knows" the array's size
        // int size = sizeof(myArray); // returns size of the whole array

        // Correct way to pass the array size to a function
        int size = 5; // keep track of array size using a variable
        for (int i = 0; i < size; i++)
        {
         cout << myArray[i] << " ";
        }
        cout << endl;

        // Error: Accessing an element out of bounds
        // int x = myArray[10];

        // Correct way to access array elements within bounds
        int y = myArray[3]; // valid
        cout << "Value at index 3: " << y << endl;

        delete[] newArray; // free allocated memory
        return 0;
        }

        // Array Erros
        int a[5], b[5];
        a = b; // This is incorrect

        for (int i = 0; i < 5; i++)
        {
            a[i] = b[i];
        }
// ***************
        int arr[3] = {1, 2, 3};
        cout << arr; // This is incorrect

        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << " ";
        }
// ****************
        int arr[3] = {1, 2, 3};
        for (int x : arr)
        {
            cout << arr; // This is incorrect
        }

        for (int x : arr)
        {
            cout << x << " ";
        }
// *******************
        double arr[3] = {1.1, 2.2, 3.3};
        for (int x : arr)
        { // This is incorrect
            cout << x << " ";
        }

        for (double x : arr)
        {
            cout << x << " ";
        }
        // Files and fstream
        // ofstream for writing to files and ifstream for reading from files.


// WRITE 
    #include <iostream>
    #include <fstream>
        using namespace std;

        int main()
        {
            ofstream outfile("output.txt"); // create an object of ofstream with the file name
            if (outfile.is_open())
            {                               // check if the file is open
         outfile << "Hello world!" << endl; // write data to the file
         outfile.close();                   // close the file
            }
            else
            {
         cout << "Unable to open file";
            }
            return 0;
        }

#include <iostream>
#include <fstream>
#include <string>

        using namespace std;

        int main()
        {
            // Step 1: Create an ofstream object
            ofstream outputFile;

            // Step 2: Open the file using the open() function
            string fileName = "example.txt";
            outputFile.open(fileName.c_str());

            // Step 3: Write to the file using the << operator
            outputFile << "Hello World!" << endl;

            // Step 4: Close the file using the close() function
            outputFile.close();

            return 0;
        }

// READ
 #include <iostream>
 #include <fstream>
        using namespace std;

        int main()
        {
            string line;
            ifstream infile("input.txt"); // create an object of ifstream with the file name
            if (infile.is_open())
            { // check if the file is open
         while (getline(infile, line))
         {                         // read data from the file line by line
             cout << line << endl; // print the data to the console
         }
         infile.close(); // close the file
            }
            else
            {
         cout << "Unable to open file";
            }
            return 0;
        }

#include <iostream>
#include <fstream>
        using namespace std;

        int main()
        {
            ifstream inputFile;
            string fileName;
            string line;

            cout << "Enter file name: ";
            cin >> fileName;

            inputFile.open(fileName);

            if (inputFile)
            {
         cout << "File opened successfully.\n";

         while (getline(inputFile, line))
         {
             cout << line << endl;
         }

         inputFile.close();
            }
            else
            {
         cout << "File failed to open.\n";
            }

            return 0;
        }
// *****************************
// PRACTICE

//     Write a function named findMax that takes an integer array and its size as arguments and returns the maximum value in the array.

//     Write a function named sortArray that takes an integer array and its size as arguments and sorts the array in ascending order.

//     Write a function named reverseArray that takes an integer array and its size as arguments and reverses the order of the elements in the array.

//     Write a function named findAverage that takes an integer array and its size as arguments and returns the average value of the elements in the array.

//     Write a function named printArray that takes an integer array and its size as arguments and prints the elements of the array on the console.

//     Write a function named mergeArrays that takes two integer arrays and their respective sizes as arguments and returns a new array that contains the elements of both arrays in ascending order.

//     Write a function named findDuplicates that takes an integer array and its size as arguments and returns a new array that contains the duplicate values in the original array.

//     Write a function named reverseString that takes a string as an argument and returns the reverse of the input string.

//     Write a function named countOccurrences that takes a string and a character as arguments and returns the number of occurrences of the character in the string.

//     Write a function named removeSpaces that takes a string as an argument and removes all the spaces in the string.
