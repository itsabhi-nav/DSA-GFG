//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        for(int i= s.size() ; i>=0; i--){
            if((s[i]-'0')%2==1){
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends