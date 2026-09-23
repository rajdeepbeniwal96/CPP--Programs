class Solution {
public:
    vector<int> nextGreatest(vector<int> arr) {
        int n = arr.size();
        int maxright =-1;
        
        for(int i = n-1;i>=0;i--){
            int curr  =  arr[i];
            arr[i]    =  maxright;
            maxright  =  max(arr[i],curr);
        }

        return arr;
    }
};