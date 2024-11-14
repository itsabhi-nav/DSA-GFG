//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
      int n = arr.size();
    if (n == 0) return "-1";

    // Sort the array
    sort(arr.begin(), arr.end());

    // Compare the first and last strings in the sorted array
    string s1 = arr[0];
    string s2 = arr[n - 1];
    
    int i = 0;
    string ans;

    // Iterate while we are within the bounds of both strings
    while (i < s1.size() && i < s2.size()) {
        if (s1[i] == s2[i]) {
            ans.push_back(s1[i]);
        } else {
            break;
        }
        i++;
    }
    
   
        return ans;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends