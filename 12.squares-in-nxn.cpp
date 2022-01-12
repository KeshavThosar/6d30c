// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // N^2 1x1, (N-1)^2 2x2, (N-2)^2 3x3 ... ,1^2 NxN
        // 1^2 + 2^2 + 3^2 + ... N^2
        
        return N*(N+1)*(2*N + 1)/6;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}  // } Driver Code Ends
