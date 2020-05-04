

class Solution {
public:
    int findComplement(int num) {
        int result =0;
        int power =1;
        while(num>1)
        {
            result += (num%2 ^1)*power;
            power <<=1;
            num >>=1; 
        }
        return result;
    }
};