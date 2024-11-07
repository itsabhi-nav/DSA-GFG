//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        sort(arr.begin(), arr.end());
        
        // Use a set to store unique permutations (to avoid duplicates)
        set<vector<int>> unique_permutations;
        
        // Generate all permutations using next_permutation
        do {
            // Insert the current permutation into the set
            unique_permutations.insert(arr);
        } while (next_permutation(arr.begin(), arr.end()));
        
        // Convert the set into a vector of vectors to return the result
        vector<vector<int>> result(unique_permutations.begin(), unique_permutations.end());
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends