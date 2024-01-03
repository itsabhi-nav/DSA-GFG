//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int smallestSubstring(string s) {
        int zero = -1, one = -1, two = -1, ans = INT_MAX;
        int maxi, mini;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                zero = i;
            } else if (s[i] == '1') {
                one = i;
            } else if (s[i] == '2') {
                two = i;
            }

            if (one != -1 && zero != -1 && two != -1) {
                mini = min(zero, min(one, two));
                maxi = max(zero, max(one, two));

                ans = min(ans, (maxi - mini + 1));
            }
        }

        if (ans != INT_MAX) {
            return ans;
        }

        return -1;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends