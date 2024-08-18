//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M ){
        int n = M.size();
    stack<int> st;

    // Step 1: Push all persons onto the stack
    for (int i = 0; i < n; i++) {
        st.push(i);
    }

    // Step 2: Determine the potential celebrity
    while (st.size() > 1) {
        int first = st.top();
        st.pop();
        int second = st.top();
        st.pop();

        if (M[first][second] == 1) {
            // first knows second, so first cannot be a celebrity
            st.push(second);
        } else {
            // first does not know second, so second cannot be a celebrity
            st.push(first);
        }
    }

    // Step 3: Check if the remaining person is actually a celebrity
    if (st.empty())
        return -1;

    int candidate = st.top();
    st.pop();

    int row = 0, col = 0;

    for (int i = 0; i < n; i++) {
        row += M[candidate][i];
        col += M[i][candidate];
    }

    // A celebrity should not know anyone (row == 0), and everyone should know the celebrity (col == n-1)
    return (row == 0 && col == n - 1) ? candidate : -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends