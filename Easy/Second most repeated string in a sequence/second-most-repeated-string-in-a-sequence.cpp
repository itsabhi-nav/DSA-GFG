//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
         
        unordered_map<string, int> mpp;
        for(int i=0; i<n; i++) mpp[arr[i]]++;
        
        vector<int> store;
        for (auto it: mpp) store.push_back(it.second);
        
        int m=store.size()-1;
        sort(store.begin(), store.end());
        
        int second_large=store[m-1];
        
        for(auto it: mpp) {
            if (it.second==second_large) return it.first;
        }
        
        return "";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends