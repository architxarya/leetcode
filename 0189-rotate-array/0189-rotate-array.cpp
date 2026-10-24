class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int n=nums.size();
        vector<int> Temp;
        for(int i=n-k;i<n;i++){
            Temp.push_back(nums[i]);
        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=Temp[i];
        }

   
    }
};