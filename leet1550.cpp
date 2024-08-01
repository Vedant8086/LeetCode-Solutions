#include<iostream>
#include<vector>
#include<algorithm>
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int new_size = arr.size();
        bool status = false;
        for(int i = 0;i <= new_size-3;i++) {
            if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0 && arr[i+2] % 2 != 0) {
                status = true;
                break;
            }
        }
        return status;
    }
};