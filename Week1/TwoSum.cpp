class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          
        vector<int>v;
        unordered_map<int,int> map;
        int s = nums.size();
        
        for(int i = 0; i < s; i++){
            map[nums[i]] = i;
        }
        
        for(int i = 0; i < s; i++){
            if(map.count(target - nums[i]) > 0 && i != map[target - nums[i]]){
                v.push_back(i);
                int j = map[target - nums[i]];
                v.push_back(j);
                break;
            }
        }
        
       return v;
    }
};