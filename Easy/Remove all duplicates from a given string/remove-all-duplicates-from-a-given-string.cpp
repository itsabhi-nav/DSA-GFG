//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    string removeDuplicates(string str) {
        // code here
        string s = "";
        s.push_back(str[0]);
        for(int i = 1; i<str.length(); i++){
            if(s.find(str[i]) == string::npos){
                s.push_back(str[i]);
            }
        }
        return s;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends