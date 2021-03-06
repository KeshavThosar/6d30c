// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> ans;
        set<map<char, int>> s1;
        
        
        for(string s : string_list){
            map<char, int> temp;
            for(char ch : s){
                temp[ch]++;
            }
            s1.insert(temp);
            temp.clear();
        }
        
        ans.resize(s1.size());
        
        map<map<char, int>, vector<string>> ans_temp;
        
        for(string s : string_list){
            map<char, int> temp;
            for(char ch : s){
                temp[ch]++;
            }
            
            if(s1.find(temp) != s1.end()){
                ans_temp[temp].push_back(s);
            }
        }
        
        int c = 0;
        for(auto it : ans_temp){
            for(string s : it.second){
                ans[c].push_back(s);
            }
            c++;
        }
        
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
