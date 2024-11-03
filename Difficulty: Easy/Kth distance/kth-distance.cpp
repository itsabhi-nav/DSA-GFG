//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
      unordered_set<int> window;

        // Traverse the array
        for (int i = 0; i < arr.size(); i++) {
            // If the current element is already in the window, we found a duplicate
            if (window.find(arr[i]) != window.end()) {
                return true;
            }

            // Insert the current element into the window
            window.insert(arr[i]);

            // If the size of the window exceeds k, remove the oldest element
            if (window.size() > k) {
                window.erase(arr[i - k]);
            }
        }

        // If no duplicates were found within distance k
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        bool res = obj.checkDuplicatesWithinK(arr, k);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        // cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends