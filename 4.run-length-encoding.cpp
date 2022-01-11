// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
string ans ="";
  int count = 0;
  char prev_char = src[0];
  for(char ch : src){
      if(ch == prev_char) count++;
      else{
          ans += prev_char;
          ans += to_string(count);
          count = 1;
          prev_char = ch;
      }
  }
  
  ans += prev_char;
  ans += to_string(count);
 
  
  return ans;
}     
 
