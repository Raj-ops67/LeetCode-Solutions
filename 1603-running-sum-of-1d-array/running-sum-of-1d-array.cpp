class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::vector<int>result;
        int currentsum=0;
        for(int i=0; i<nums.size(); i++){
            currentsum+=nums[i];
           result.push_back(currentsum); 
        }
        return result;
        
    }
};