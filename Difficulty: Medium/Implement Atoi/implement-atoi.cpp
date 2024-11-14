//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int myAtoi(char *s) {
 int i = 0, sign = 1, result = 0;
        
        // Step 1: Skip leading whitespaces
        while (s[i] == ' ') {
            i++;
        }

        // Step 2: Check for the optional sign
        if (s[i] == '+' || s[i] == '-') {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Convert the string to integer
        while (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            
            // Step 4: Check for overflow or underflow
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        // Step 5: Return the final result with the correct sign
        return result * sign;
    }

    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends