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

int main() {
    int n = 1,n1 = 1,i = 0;
    bool stat = false;
    cout << bool(stat) << endl;
    while(n1 <= n) {
        n1 = pow(3,i);
        if(n1 == n) {
            stat = true;
            break;
        }
        i++;
    }
    cout << stat << " "<<i<< endl;
    //this is done by my own without copy with 0ms time complexity.
    return 0;
}