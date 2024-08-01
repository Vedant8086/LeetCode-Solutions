//subtraction of multiplication and addition of digit in number 
class Solution {
public:
    int subtractProductAndSum(int n) {
        int difference,mul = 1,sum =0;
        while(n != 0) {
            int n1 = n % 10;
            n = n / 10;
            mul *= n1;
            sum += n1;
        }
        difference = mul - sum;
        return difference;
    }
};
//Other part is just autocomplete.