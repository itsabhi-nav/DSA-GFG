//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void lpsfind(vector<int>& lps, string s) {
        int pre = 0, suf = 1;

        while (suf < s.size()) {
            if (s[pre] == s[suf]) {
                lps[suf] = pre + 1;
                suf++;
                pre++;
            } else if (pre == 0) {
                lps[suf] = 0;
                suf++;
            } else {
                pre = lps[pre - 1];
            }
        }
    }

    int findMatching(string text, string pat) {
        vector<int> lps(pat.size(), 0);
        lpsfind(lps, pat);

        int first = 0, second = 0;

        while (first < text.size() && second < pat.size()) {
            if (text[first] == pat[second]) {
                first++;
                second++;
            } else {
                if (second == 0)
                    first++;
                else
                    second = lps[second - 1];
            }
        }

        if (second == pat.size()) {
            return first - second;
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string text, pat;
        cin >> text >> pat;
        Solution obj;
        cout << obj.findMatching(text, pat) << endl;
    }
    return 0;
}
// } Driver Code Ends