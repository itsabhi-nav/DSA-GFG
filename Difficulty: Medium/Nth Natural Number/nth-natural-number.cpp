//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long findNth(long long n) {
        // code here.
        long long result = 0;  // This will store the result number (the nth natural number without 9s)
        long long base = 1;  // This helps construct the result number, starting from the least significant digit

        // We continue until n becomes 0
        while (n > 0) {
            result += (n % 9) * base;  // Convert the current digit (in base 9) and add to result
            n /= 9;  // Update n by dividing it by 9 (move to the next base 9 digit)
            base *= 10;  // Move to the next place value (increase by a power of 10)
        }
        
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, ans;
        cin >> n;
        Solution obj;
        ans = obj.findNth(n);
        cout << ans << endl;
    }
}

// } Driver Code Ends