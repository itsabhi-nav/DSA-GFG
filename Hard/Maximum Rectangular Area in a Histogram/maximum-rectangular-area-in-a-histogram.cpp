//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
       vector<long long> Right(n);
        vector<long long> Left(n);
        stack<long long> st;

        // Find Next Small To the right using stack
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                Right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty()) {
            Right[st.top()] = n;
            st.pop();
        }

        // Find Next Small To the Left using stack
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                Left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        while (!st.empty()) {
            Left[st.top()] = -1;
            st.pop();
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, arr[i] * (Right[i] - Left[i] - 1));
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends