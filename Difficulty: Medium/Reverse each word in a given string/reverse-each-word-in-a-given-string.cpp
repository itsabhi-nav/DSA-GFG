//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string reverseWords(string s) {
        
        stack<char> st;
    string result = "";

    
    for (int i = 0; i <= s.size(); i++) {
        // If we find a dot or reach the end of the string
        if (i == s.size() || s[i] == '.') {
            // Pop characters from the stack to reverse the word
            while (!st.empty()) {
                result += st.top();
                st.pop();
            }
            // Add the dot after the word (if it's not the end of the string)
            if (i != s.size()) {
                result += '.';
            }
        } else {
            // Push the current character to the stack
            st.push(s[i]);
        }
    }
    return result;
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
        cout << ob.reverseWords(s) << endl;
    }
    return 0;
}

// } Driver Code Ends