//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        
   int n = arr.size();
    vector<int> ans(2);  // to store the repeating and missing numbers
    
    // Step 1: Find the repeating number
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1;  // Use the absolute value to find the index
        
        // If the element at the found index is already negative, it's the repeating number
        if (arr[index] < 0) {
            ans[0] = abs(arr[i]);  // Repeating number
        } else {
            // Mark the element at the index as visited by negating it
            arr[index] = -arr[index];
        }
    }
    
    // Step 2: Find the missing number
    for (int i = 0; i < n; i++) {
        // If an element is still positive, that means its index + 1 is the missing number
        if (arr[i] > 0) {
            ans[1] = i + 1;  // Missing number
        }
    }

    return ans;}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends