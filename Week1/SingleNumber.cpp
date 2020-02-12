class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> m;
        
        int size = nums.size();
        for(int i = 0; i < size; i++){
            if(m.count(nums[i]) == 0)
                m[nums[i]] = 1;
            else
                m[nums[i]]++;
        }
        
        for(int i = 0; i < size; i++){
            if(m[nums[i]] == 1)
                return nums[i];
        }
        return -1;
    }
};