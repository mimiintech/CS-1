#include <iostream>
#include <vector>
using namespace std;

void changeX(int &x);
void arrayStats(int a[], int size, int &arrMin, int &aMax, double &arrAvg);
void bubbleSort(int a[], int size);
void printArray(int a[], int size);
void bubbleShort_V(vector<int>a);
int main() {
int x = 5;
changeX(x);
cout << "The value of x in the main function: " << x << endl;
int arr[]= {3,5,9,4,3,6,2,5,8,4,1,0,10};
int arrMin, arrMax;
double arrAvg;
arrayStats(arr, 13, arrMin, arrMax, arrAvg);
cout << "Min: " << arrMin << "Max: " << arrMax << "Average" << arrAvg << endl;
bubbleSort(arr, 13);
printArray(arr, 13);
cout << arr << endl;
return 0;

}

void changeX(int &x) {
    x = 2 * x;
    cout << "The value nside chnageX function: " << x << endl; 
}
// NOW BOTH READS 10

void arrayStats(int a[], int size, int &arrMin, int &arrMax, double &arrAvg) {
// One loop
    arrMin = a[0];
    arrMax = a[0];
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i]< arrMin)
        {
            arrMin = a[i];
        }
        if (a[i] > arrMax)
        {
            arrMax = a[i];
        }
        total += a[i];   
    }
    arrAvg = double(total)/size;
}

void bubbleSort(int a[], int size) {
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size-1-j; size++)
        {
          if (a[i+1] <a[i]){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
          }
        }
        
    }
    
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << '\t';
    }
    cout << '\n';
}

void bubbleShort_V(vector<int> a) {
    
}