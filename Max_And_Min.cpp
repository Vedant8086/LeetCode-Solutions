#include<iostream>
#include<iomanip>
#include<cstring>
#include<c++/stdlib.h>
using namespace std;
//Works Completely Fine.
class Max_and_Min {
    public : 
        Max_and_Min() {
            cout << "WARNING :: This Program is About Max And Min Element in Array." << endl;
        }
        int max(int arr[],int n) {
            int max = arr[0];
            for(int i = 0;i < n;i++) {
                if(arr[i] > max) {
                    max  = arr[i];
                }
            }
            return max;
        }
        int min(int arr[],int n) {
            int min = arr[0];
            for(int i = 0;i < n;i++) {
                if(arr[i] < min) {
                    min = arr[i];
                }
                return min;
            }
        }
        ~Max_and_Min() {
            cout << "-------------Program End!!------------" << endl;
        }
};
int main() {
    Max_and_Min m1;
    int array_size;
    cout << "Enter the Array Size : ";
    cin >> array_size;
    int arr[array_size];
    cout << "Enter Elements : " << endl;
    for(int i = 0;i < array_size;i++) {
        cin >> arr[i];
    }
    int Max_term = m1.max(arr,array_size);
    int Min_term = m1.min(arr,array_size);
    cout << "Maximum Term : " << Max_term << endl;
    cout << "Minimum Term : " << Min_term << endl;
    return 0;
}