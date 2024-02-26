//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& arr) {
        // code here
        vector<int>ans(n,-1);
        stack<int>st;
        
        for(int i =0; i<n*2; i++){
           int index =i%n;
            while(!st.empty() && arr[st.top()]<arr[index]){
                ans[st.top()]= arr[index];
                st.pop();
            }
             st.push(index);
        }
       
          return ans;
    }
  
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends