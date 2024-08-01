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

class Sum_of_N { 
    public :
        Sum_of_N() {
            cout << "Title : Sum of N number Program." << endl;
        }
        double sum(double N) {
            double sum = 0;
            for(int i = 1;i <= N;i++) {
                sum += i;
            }
            return sum;
        }
        double sum_new(double N) {
            double sum = 0;
            int i = 1;
            while(i <= N) {
                sum += i;
                i++;
            }
            return sum;
        }
        ~Sum_of_N() {
            cout << "---------------------Program End!------------------" <<endl;
        }
};
int main() {
    Sum_of_N Sum1;
    double N;
    cout << "Enter Number to Sum : ";
    cin  >> N;
    double result = Sum1.sum(N);
    double result1 = Sum1.sum_new(N);
    cout << "Sum Using For Loop :" << endl;
    cout << "Sum : " << result << endl;
    cout << "Sum using While Loop :" <<endl;
    cout << "Sum : " <<result1<<endl;
    return 0;
}