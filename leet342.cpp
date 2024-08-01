#include<iostream>
#include<cmath>
class Solution {
public:
    bool isPowerOfFour(double n) {
        double n1 = 1,i = 0;
        bool stat = false;
        while(n1 <= n) {
        n1 = pow(4,i);
        if(n1 == n) {
            stat = true;
            break;
        }
        i++;
    }
        return stat;
    }
};