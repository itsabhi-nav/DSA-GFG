//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    
    vector<int>left(int A[], int n){
        
        vector<int>ans(n,0);
        stack<int>st;
        
        for(int i =n-1; i>=0; i--){
            while(!st.empty() && A[st.top()]>A[i]){
                ans[st.top()]=A[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    
     vector<int>right(int A[], int n){
        
        vector<int>ans(n,0);
        stack<int>st;
        
        for(int i =0; i<n; i++){
            while(!st.empty() && A[st.top()]>A[i]){
                ans[st.top()]=A[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
    
    
   int findMaxDiff(int A[], int n) {
        vector<int> leftArr = left(A, n);
        vector<int> rightArr = right(A, n);
       
        int ans = 0;
       
        for (int i = 0; i < n; i++) {
            ans = max(ans, abs(leftArr[i] - rightArr[i]));
        }
        return ans;
    }

};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends