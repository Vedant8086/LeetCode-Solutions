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
class check_prime {
    public  :
        check_prime() {
            cout << "Title : Prime Number checking Program." <<endl;
        }
        int is_prime(int N) {
            int count = 0;
            for(int i =1;i <= N;i++) {
                if(N % i == 0) {
                    count += 1;
                }
            }
            if(count == 2) {
                cout << N << " is Prime Number." <<endl;
            }
            else {
                cout << N << " isn't Prime Number." <<endl;
            }
        }
        ~check_prime() {
            cout << "-------------------------Program End!!-----------------" <<endl;
            }
};
int func(int arr[],int si) {
    cout << arr[0] << " is a funcking pussy." << endl;
}
int main() {
    check_prime prime1;
    int N;
    cout << "Enter NUmber To check Prime Or Not : ";
    cin >> N;
    prime1.is_prime(N);
    int *arr;
    arr = new int[10];
    func(arr,N);
    return 0;
}