class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n = arr.size();
        int d=INT_MAX;
        for(int i=0;i<n-1;i++){
            d=min( d , abs(arr[i+1]-arr[i]));
        }
        
        if(arr[0]>arr[1]){
            d=-d;
        }
          
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i] != d){
                return arr[i]+d;
            }
        }
        return arr[n-1]+d;
    }
};