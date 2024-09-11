//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        int n = arr.size();
        long long cost =0;
        priority_queue<long long, vector<long long>, greater<long long>>p;
        for(long long i =0; i<n;i++)
        p.push(arr[i]);
        
        long long first, second;
        while(p.size() !=1){
            first = p.top();
            p.pop();
            second = p.top();
            p.pop();
            first += second;
            cost += first;
            p.push(first);
        }
        return cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends