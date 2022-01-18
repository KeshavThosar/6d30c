class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int prod = 1;
        int count = 0;
        
        int head = 0, tail = 0;
        while(tail < n){    
            prod *= a[tail];
            
            while(prod >= k){
                prod /= a[head];
                head++;
            }
            
            if(prod < k){
                count += 1 + (tail - head);
            }
            
            tail++;
        }
        
        return count;
    }
};
