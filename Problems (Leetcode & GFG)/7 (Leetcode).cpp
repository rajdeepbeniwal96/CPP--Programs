#include <climits>
class Solution {
public:
    int reverse(int x) {
        
        long long int ans=0,rem;
        while(x!=0){
            rem=x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10) // Check for overflow before updating ans
            return 0;
            ans=ans*10+rem;
        }
        return ans;
    }
};