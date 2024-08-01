#include<iostream>
#include<iomanip>
#include<thread>
#include<typeinfo>
#include<cstring>
#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<exception>
#include<stdexcept>
#include<fstream>
using namespace std;
//this algorithm need sorted array like binary but we divided into three parts.
class TernarySearch {
    public : 
        TernarySearch() {
            cout << "Title : Ternary Search Program." <<endl;
        }
        int Ternary_Search(int* arr,int l,int r,int key) {
            while(r >= l) {
                int mid1 = l + (r-l/3);//int data type error resolution.
                int mid2 = r - (r - l/3);

                if(key == arr[mid1]) return mid1;
                if(key == arr[mid2]) return mid2;

                if(key < arr[mid1]) r = mid1 - 1;

                else if(key > arr[mid2]) l = mid2 + 1;

                else {
                    l = mid1 + 1;
                    r = mid2 - 1;
                }
            }
            return -1;
        }
        ~TernarySearch() {
            cout << "-------------------------Program End!---------------------" <<endl;
        }
};
int main() {
    TernarySearch search1;
    int n;
    cout << "Enter the count : ";
    cin  >> n;
    int* arr = new int[n];
    cout << "Ener the array Element : ";
    for(int i = 0;i < n;i++) cin >> arr[i];
    int key;
    cout << "Enter the Search kay : ";
    cin >> key;
    int result = search1.Ternary_Search(arr,0,(n-1),key);
    if(result == -1) cout << "Element Not Found in Array." <<endl;
    else cout << "Element is at index Number : " <<result << endl;
    delete[] arr; 
    return 0;
}