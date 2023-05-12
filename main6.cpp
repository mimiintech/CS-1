/*
   Name: Michelle_Silva, 5006988436, CS135_1021, Lab 2B
   Description: convert from pints to gallons
   Input: the number of pints
   Output: gallons and the cost
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.141592;

int main() {

    double area = 0.0;

    double radius = 0.0;

    double circumference = 0.0;

    cout << "Enter the radius of a circle" << endl;

    cout << "**";

    cin >> radius;

    cout<<endl;

    circumference = 2 * pi * radius;

    

    // area = pi * radius^2;

    string separator = "+--------+-------+------+\n";
    string h1 = "radius", h2 = "circumference", h3 = "area";
    double length = radius; 
    double width = circumference;

    // double area = pie * radius^2;







    return 0;
}