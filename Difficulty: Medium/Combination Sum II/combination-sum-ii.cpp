//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    public:
  vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> combination;
        
        // Sort the candidates to handle duplicates easily
        sort(candidates.begin(), candidates.end());
        
        // Start the backtracking process
        backtrack(candidates, target, result, combination, 0);
        
        return result;
    }

    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& result, 
                   vector<int>& combination, int start) {
        // If we have a valid combination
        if (target == 0) {
            result.push_back(combination);
            return;
        }

        // If target becomes negative, no need to proceed
        if (target < 0) {
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            // Skip duplicates: if the current element is the same as the previous one, skip it
            if (i > start && candidates[i] == candidates[i - 1]) {
                continue;
            }

            // Include the current number in the combination
            combination.push_back(candidates[i]);
            
            // Recurse with the remaining target (target - candidates[i]) and next index
            backtrack(candidates, target - candidates[i], result, combination, i + 1);
            
            // Backtrack: remove the last added element to try another combination
            combination.pop_back();
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    
cout << "~" << "\n";
}
    fclose(stdout);
    return 0;
}

// } Driver Code Ends