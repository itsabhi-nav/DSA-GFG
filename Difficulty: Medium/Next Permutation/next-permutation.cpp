//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
       int i , j;
       int n = arr.size();
       
       for(i=n-2; i>=0; i--){
           if(arr[i]<arr[i+1]){
               break;
           }
       }
       
       if(i>=0){
           for(j=n-1; j>i;j--){
               if(arr[j]>arr[i]){
                   break;
               }
           }
           swap(arr[i], arr[j]);
       }
        reverse(arr.begin() + i + 1, arr.end());
        



    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends