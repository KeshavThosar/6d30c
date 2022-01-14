// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        int *ans = (int *)malloc(2*sizeof(int));
        unordered_map<int, int> m;
        
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
        }
        
        
        for(int i = 1; i <= n; i++){
            if(m[i] == 0) ans[1] = i;
            if(m[i] == 2) ans[0] = i;
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
