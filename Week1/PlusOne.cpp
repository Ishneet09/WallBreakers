class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector<int>v;
        stack<int>s;
        
        if(size == 0)
            return {};
        
        int sum;
        int carry = 0;
        
        for(int i = size-1; i >= 0; i--){
            if(i == size - 1)
                sum = digits[i] + 1;
            else
                sum = digits[i] + carry;
            
            int temp = sum % 10;
            s.push(temp);
            carry = sum / 10;
            
        }
        if(carry != 0)
            s.push(carry);
        
        while(s.size() != 0){
            v.push_back(s.top());
            s.pop();
        }
        return v;
    }
};