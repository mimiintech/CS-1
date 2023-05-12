#include <iostream>
// don't need iostream in this case
#include <fstream>
// allows reading & writing to files


using namespace std;
int main() {
// creates a file if the filename doesn't exist
// ofstream
// ofstream writer;
// // use the open function
// // overwriting
// // writer.open("output.txt");
// // appending
// writer.open("output.txt", fstream::app);
// // // write to the open file using: objectName << data
// writer<<"Hello from the Code\n";
// writer << "tRY agAIN\n";
// // // Close the stream
// writer.close();
// *****************************************


// cout << "Enter file name" << endl;
// string fileName;
// getline(cin, fileName);


// ofstream writer;
// writer.open(fileName.c_str());
// // attach c_str so it can work on all PC's
// // run it once & then check
// string data;
// do
// {
// cout << "Enter data:\n";
// getline(cin, data);
// if (data!="done") {
//     writer << data;
//     // prints without the done string
// }
// } while (data !="done");

// writer.close();
// ******************************
// ifstream
// create object
// ifstream reader;
// // the open function to open file
// reader.open("in1.txt");
// // optional: check if the file was opened
// // read the file
// string data;
// while(getline(reader , data)) {
//     cout << data << endl;
// }
// reader.close();
// *************************
// ifstream reader;
// reader.open("in2.txt");
// int number;
// int total = 0;
// while (reader>>number) {
//     total += number;
// }
// cout << "The Sum is: " << total << endl;
// reader.close();
// only added the first 2 which is 3
// ********************************
// cout << "Enter 2 numbers with space between\n";
// int n1, n2;
// cin >> n1 >> n2;

// ifstream reader;
// reader.open("in3.txt"); 
// // int n1, n2;

// while (!reader.eof()) {
//     reader >> n1 >>n2;
//     if (reader.fail()) {
//         reader.clear();
//         reader.ignore(100,'\n');
//         cout << "reader failed\n";
//     } else {
//         cout << "n1 =" << n1 <<", n2" << n2 << endl;
//     }
// }


return 0;
}