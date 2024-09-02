class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int count = 0;
        vector<vector<int>> ans(m, vector<int>(n));
        if(original.size() == (m * n)) {
            for(int i = 0;i < m;i++) {
                for(int j = 0;j < n;j++) {
                    if(count < original.size()) {
                        ans[i][j] = original[count];
                        count++;
                    }
                }
            }
        }
        else {
            vector<vector<int>> x;
            return x;
        }
        return ans;
    }
};