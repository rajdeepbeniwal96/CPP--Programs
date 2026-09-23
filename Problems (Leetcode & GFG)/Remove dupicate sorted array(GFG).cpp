class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int i=0;
         while(i<arr.size()-1){
             if(arr[i]==arr[i+1]){
                 arr.erase(arr.begin() + i);
             }
             else{
                 i++;
             }
         }
         return arr;
    }
};