class Solution {
public:
    int nthUglyNumber(int n) {
        int ans;
        set<long long int> s;
        s.insert(1);
        
        while(n > 0){
            
            ans =  *s.begin();
            s.insert(*s.begin() * 2);
            s.insert(*s.begin() * 3);
            s.insert(*s.begin() * 5);
            
            s.erase(s.begin());
            n--;
        }
        
        return ans;
        
        
    }
};
