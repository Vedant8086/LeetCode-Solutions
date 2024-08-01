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

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return 0;
        }
        string s1 = to_string(x);
        string s2 = s1;
        reverse(s1.begin(),s1.end());
        if(s1 == s2) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

string replace(string& str) {
        string s3 = "";
        for(int i = 0;i<str.length();i++) {
            if(str[i] == ' ') {
                s3.push_back('@');
                s3.push_back('4');
                s3.push_back('0');
            }
            else {
                s3.push_back(str[i]);
            }
        }
        return s3;
}   
int main() {
    string s1 = "my name is khan";
    string s3 = replace(s1);
    cout << "Replaced String : " << s3 << endl;
}