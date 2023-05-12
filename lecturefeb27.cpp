// Arrays

#include <iostream>


using namespace std; 

int main() {

// Declare an Array
// Syntax
// dataType arrayName[numberOfELements];
// string arr[10];


// int values[10];
// cout << values << endl;
// memory address - does not give you the content
// garbage data

// int values[] = {3,7};
// 9 elements

// for (int i = 0; i < 9; i++) {
//     cout << values[i] << endl;
// }

// cout << "Memory needed for the array: " << sizeof(values) << endl;
// cout << "Memory needed for the array: " << sizeof(values[0]) << endl;
// cout << "Number of elements: " << sizeof(values) / sizeof(values[0]) << endl;

// int arrSize = sizeof(values) / sizeof(values[0]);

// for (int i = 0; i < arrSize; i++) {
//     cout << values[i] << endl;
// }
// *************************************************
// TEST QUESTION

// string friends[] = {"John", "Mary", "Jo", "Bill", "Mia", "Jana"};

// // int arrSize = sizeof(friends)/sizeof(friends[0]);

// for (int i = 0; i < sizeof(friends) / sizeof(friends[0]); i++)
// {
//     cout << i + 1 << " - " << friends[i] << endl;
// }

// // Update an Element
// friends[2] = "Mark";
// // Swapping
// string temp = friends[0];
// friends[0] = friends[2];
// friends[2] = temp;

// cout << "Update" << endl;
// for (int i = 0; i < sizeof(friends) / sizeof(friends[0]); i++)
// {
//     cout << i + 1 << " - " << friends[i] << endl;
// }
// *************************************************

// string friends[] = {"John", "Mary", "Jo", "Bill", "Mia", "Jana"};
// int arrSize = sizeof(friends) / sizeof(friends[0]);
// int index = -1;

//  for (int i = 0; i < arrSize; i++)
// {
//   if (friends[i] == "Bill") {
//     index = i;
//     break;
//   }
//  }
//  cout << "Index: " << index << endl;

// ************************************

//  string friends[] = {"John", "Mary", "Jo", "Bill", "Mia", "Jana"};
//  int arrSize = sizeof(friends) / sizeof(friends[0]);
//  int index = -1;

//  //  ****SHORTER WAY
//   string search;
//   cin >> search;
//  // use cin or getline to put something into search

//  for (int i = 0; i < arrSize; i++)
//  {
//   if (friends[i] == search)
//   {
//     index = i;
//     break;
//   }
//  }
//  cout << "Index: " << index << endl;

// **************************

//  string friends[] = {"John", "Mary", "Jo", "Bill", "Mia", "Jana"};
//  int arrSize = sizeof(friends) / sizeof(friends[0]);

// string friends2[arrSize+1];

//  for (int i = 0; i < arrSize; i++) {
//     friends2[i] = friends2[i];
//  }
//  friends2[arrSize] = "New Friend";

//  for (int i = 0; i < arrSize; i++)
//  { cout << friends2[i] << endl; }

    return 0;
 }