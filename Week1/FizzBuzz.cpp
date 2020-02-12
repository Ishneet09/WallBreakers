class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i = 1;
        vector<string>v;
        
        while(i <= n){
            if(i % 15 == 0)
                v.push_back("FizzBuzz");
            else if(i % 3 == 0)
                v.push_back("Fizz");
            else if(i % 5 == 0)
                v.push_back("Buzz");
            else{
                v.push_back(to_string(i));
            }
            i++;
        }
        return v;
    }
};