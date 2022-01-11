class Solution {
public:
    int gcd(int m, int n){
        if(n == 0) return m;
        return gcd(n, m % n);
    }
    
    string gcdOfStrings(string str1, string str2) {
        int gcdLength = gcd(str1.length(), str2.length());
        string subs1 = "", subs2 = "";
        for(int i = 0; i < gcdLength; i++){
            subs1 += str1[i];
            subs2 += str2[i];
        }
        // cout << "subs1 " << subs1 << " subs2 " << subs2 << endl;
        
        if(subs1.compare(subs2) != 0) return "";
        
        
        int n1 = str1.length() / gcdLength, n2 = str2.length() / gcdLength;
        
        string temp = "";
        for(int i = 0; i < n1; i++) temp += subs1;
        // cout << n1 << " " << temp << endl;
        if(temp.compare(str1) != 0) return "";
        
        temp = "";
        
        for(int i = 0; i < n2; i++) temp += subs2;
        if(temp.compare(str2) != 0) return "";
        
        return subs1;
        
    }
};
