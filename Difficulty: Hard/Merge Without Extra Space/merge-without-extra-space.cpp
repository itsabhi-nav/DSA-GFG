//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
    int m = b.size();
    
    // Start comparing the last element of a[] with the first element of b[]
    int i = n - 1, j = 0;
    
    // While we still have valid elements in both arrays
    while (i >= 0 && j < m) {
        // If the current element of a[] is greater than the current element of b[]
        if (a[i] > b[j]) {
            // Swap them
            swap(a[i], b[j]);
        }
        // Move to the next elements
        i--;
        j++;
    }
    
    // After swapping, sort both arrays
    sort(a.begin(), a.end()); // Sort a[]
    sort(b.begin(), b.end()); // Sort b[]
        
    }
};

//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; // Inputting the test cases

    while (t--) {
        vector<int> a, b;

        // Reading the first array as a space-separated line
        string arr1;
        getline(cin >> ws, arr1); // Use ws to ignore any leading whitespace
        stringstream ss1(arr1);
        int num;
        while (ss1 >> num) {
            a.push_back(num);
        }

        // Reading the second array as a space-separated line
        string arr2;
        getline(cin, arr2);
        stringstream ss2(arr2);
        while (ss2 >> num) {
            b.push_back(num);
        }

        Solution ob;
        ob.mergeArrays(a, b);

        // Output the merged result
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends