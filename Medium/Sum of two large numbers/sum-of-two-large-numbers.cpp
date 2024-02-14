//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string findSum(string X, string Y) {
        // Your code goes here
         reverse(X.begin(), X.end());
         reverse(Y.begin(), Y.end());
         if(Y.size()>X.size()){
             swap(X,Y);
         }
         
         int n = X.size(), m = Y.size();
         int carry=0;
         int i =0, j=0;
         
         while(i<n && j<m){
             carry += (X[i]-'0')+(Y[j]-'0');
             X[i] = '0'+(carry%10);
             carry = carry/10;
             i++;
             j++;
         }
         
         while(i<n){
             carry += (X[i]-'0');
             X[i]= '0'+(carry%10);
             carry= carry/10;
             i++;
         }
         
         while(carry){
             X.push_back('0'+carry%10);
             carry = carry/10;
         }
         
         while(X.size() && X.back()=='0'){
             X.pop_back();
         }
         
         reverse(X.begin(), X.end());
         
         if(X.size()==0){
             return "0";
         }
         else
         return X;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;
        Solution ob;
        cout << ob.findSum(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends