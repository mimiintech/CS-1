// Functions
#include <iostream>
using namespace std;


// ARRAYS
// Write a function named findMax that takes an integer array and its size as arguments and returns the maximum value in the array.
// int findMax(int arr[], int size){
//     int max = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int maxVal = findMax(arr, size);
//     cout << "Max Value in Array" << maxVal << endl;
//     // 9
//     return 0;
// }

// *************************************************************************************
//  Write a function named sortArray that takes an integer array and its size as arguments and sorts the array in ascending order.

// void sortArray(int arr[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         for (int j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 // Swap arr[j] and arr[j+1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// ************************************************************************************
// Write a function that is called vectorMin that takes in a vector of integers as input and
//     returns the lowest number in that vector.

// VECTORS
// #include <iostream>
// #include <vector>

// using namespace std;

// int vectorMin(vector<int> vec)
// {
//     int min = vec[0];
//     for (int i = 1; i < vec.size(); i++)
//     {
//         if (vec[i] < min)
//         {
//             min = vec[i];
//         }
//     }
//     return min;
// }

// int main()
// {
//     vector<int> vec = {1,2,3,4,5};
//     int minVal = vectorMin(vec);
//     cout << "Min Value in Vector: " << minVal << endl;
//     return 0;
// }
// compiler issue update to verison C++11 standard
// *************************************************************************************
// Write a function called stringToUpperCase that converts a string to uppercase and
// returns it
// ARRAYS

// #include <cctype>

// string stringToUpperCase(string str) {
//     string result = str;
//     for (int i = 0; i < str.size(); i++)
//     {
//         result[i] = toupper(str[i]);
//     }
//     return result;
// }

// int main() {
//     string input = "hello";
//     string convertToUpper = stringToUpperCase(input);
//     cout << convertToUpper;
//     // HELLO
// }
// *********************************************************
// Write a function called countVowles that returns the number of vowels (a, e, i, o, u,
// w, y) in a string. For simplicity, assume that the string contains lowercase letter only
// convert the char to lower
// increment
// #include <iostream>
// #include <string>
// #include <cctype>

// using namespace std;

// int countVowels(string str)
// {
//     int counter = 0;
//     for (int i = 0; i < str.size(); i++)
//     {
//         char letter = tolower(str[i]);
//         if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
//         {
//             counter++;
//         }
//     }
//     return counter;
// }

// int main()
// {
//     string input = "hello";
//     int vowelCount = countVowels(input);
//     cout << "Number of Vowels: " << vowelCount;
//     return 0;
// }
// ************************************************************************
// Write a function called countFileLines that takes a filename as input and return the
// number of lines as output.The function will return -1 if the file cannot be opened.
// Hint : make sure you are reading the spaces as a part of the line to read a complete line at a
// time and not a single entry
// READ THE FLE & RETURN THE # OF LINES
// #include <fstream>
// #include <string>

// using namespace std;

// int countFileLines(string filename)
// {
//     ifstream reader;
//     string line;
//     int count = 0;
//     reader.open(filename);
//     if (reader)
//     {
//         while (getline(reader, line))
//         {
//             count++;
//         }
//         reader.close();
//         return count;
//     }
//     else
//     {
//         return -1;
//     }
// }

// int main()
// {
//     string filename;
//     cout << "Enter file name: ";
//     cin >> filename;
//     int lineCount = countFileLines(filename);
//     if (lineCount != -1)
//     {
//         cout << "Number of lines: " << lineCount << endl;
//     }
//     else
//     {
//         cout << "Error opening file." << endl;
//     }
//     return 0;
// }

// Enter file name: test.txt
// Number of lines : 4
// *************************************************************************
// Write a function that is called maxMin that takes in an array of integers 
// as input and
// saves the maximum and minimum values of the array in variables 
// provided to the
// function by the caller.
// means use &

// void maxMin(int arr[], int size, int &min, int &max)
// {
//     max = arr[0];
//     min = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int minVal, maxVal;
//     maxMin(arr, size, minVal, maxVal);
//     cout << "Min VALUE: " << minVal << endl;
//     cout << "Max VALUE: " << maxVal << endl;
//     return 0;
// }
// ********************************************************
// Write a function called countEvenes that reads 
// an entire array of integers. The function
// will return the number of elements containing even numbers
// Return the number of elements means there's a counter & then use 
// the % to find the even
// arr[i] % 2 == 0

// int countEvenes(int arr[], int size) {
//     int counter = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 == 0)
//         // If this remainder is 0, it means that the number is divisible by 2
//         {
//             counter++;
//         }  
//     }
//     return counter;
// }

// int main(){
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int result = countEvenes(arr, size);
//     cout << result << endl;
//     return 0;
// }
// ****************************************************************************
// Default Param. on exam
// Only using the default param. if it says there's addiitonal param.
// Cmd line arguments - write a full application
// stringstream ss
// function overloading


// 1- FALSE



