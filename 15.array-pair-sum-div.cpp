// Reference https://www.youtube.com/watch?v=uVLp1tkT4NU
class Solution {
    int adjust(int x, int k){
        if(x >= 0) return x;
        
        x += k * (abs(x) / k);
        x += k;
        return x % k;
    }
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> m;
        for(int x : arr) m[adjust(x, k)%k]++;
        if(m[0]%2 != 0) return false;
        if(m[k]%2 != 0) return false;
        
        for(int i = 1; i <= k-1; i++){
            if(m[i] != m[k-i]) return false;
        }
        
        return true;
    }
    
};
