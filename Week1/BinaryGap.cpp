class Solution {
public:
    int binaryGap(int N) {
        vector<int>binary_rep;
        vector<int>v;
        stack<int>s;
        
        while(N > 0){
            s.push(N % 2);
            N = N / 2;
        }
        
        while(s.size() != 0){
            binary_rep.push_back(s.top());
            s.pop();
        }
        
        int size = binary_rep.size();
        
        for(int i = 0; i < size; i++){
            if(binary_rep[i] == 1)
                v.push_back(i);
        }
        
        int v_size = v.size();
        int distance = 0;
        
        for(int i = 0; i < v_size-1; i++){
            if(v[i+1] - v[i] > distance)
                distance = v[i+1] - v[i];
        }
        return distance;
        
    }
};