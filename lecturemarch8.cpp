#include <iostream>
#include <vector>

// Arrays & Vectors
// Arrays have a fixed sixe & vectors don't
using namespace std; 
int main() {
    // // declaring a vector: zero elements
    // // syntax: vecto <dataType> vecName;
    // vector<int>v1;
    // // add an elements to the end of a vector
    // // vecName.push_back(element)
    // v1.push_back(5);
    // v1.push_back(15);
    // v1.push_back(10);
    // v1.push_back(12);
    // v1.pop_back();
    // // removes the last element
    // // cout << v1[0] << endl;

    // // to insert a specific location
    // v1.insert(v1.begin(), 0);
    // // added 0
    // v1.insert(v1.begin()+1, 4);
    // v1.insert(v1.end()-1, 9);
    // // removing from a specific location
    // v1.erase(v1.end() - 1);
    // v1.erase(v1.begin() );
    // // v1.clear();
    // if (v1.empty()) {
    //     cout << "Vector has no elements";
    // } else {
    // cout << "Number of elements in the vector: " << v1.size() << endl;
    // // for(int i = 0; i < v1.size(); i++) {
    //     // // cout << v1[i] << endl;
    //     // cout << v1.at(i) << endl;
    //     // // same as the other
    //     // // know both
    // // }
    // for (int temp : v1)
    // {
    //     cout << temp;
    // }
    // int max = v1.at(0);
    // for (int temp : v1){
    //     if (temp>max){
    //         max = temp;
    //     }
    // }
    // cout << "The max is: " << max << endl;
    // }

// **********************************************

    vector<char>v1(10, '*');
    cout <<v1.size()<<endl;
    v1.push_back('a');
    for(char temp:v1){
        cout <<temp<<endl;
    }
    vector<double>v2 = {2.5,3.5,4.1,5.6};
    for(double temp: v1){
        cout <<temp<<endl;
    }
    return 0;
}