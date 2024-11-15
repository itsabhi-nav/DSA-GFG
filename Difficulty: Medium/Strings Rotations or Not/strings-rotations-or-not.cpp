//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string& s1, string& s2) {
        // Your code here
        // if(s1==s2)
        // return true;
        
        // if(s1.size() != s2.size()){
        //     return false;
        // }
        
        // string ans= s1+s2;
        
        // if(s.find(s2)==-1){
        //     return false;
        // }
        
        // return true;
        if (s1.size() != s2.size()) {
        return false;
    }
    
    // Step 2: Concatenate s1 with itself
    string s = s1 + s1;
    
    // Step 3: Check if s2 is a substring of the concatenated string
    if (s.find(s2) != -1) {  // If s2 is found in the concatenated string
        return true;
    }

    return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.areRotations(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends