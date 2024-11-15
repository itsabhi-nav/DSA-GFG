//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
       string result ="";
       int balance =0;
       
       for(int i =0;i,i<s.length(); i++){
           if(s[i]=='('){
               if(balance>0){
                   result+=s[i];
               }
               balance++;
           }
           else{
               balance--;
               if(balance>0){
                   result+=s[i];
               }
           }
       }
       return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    
cout << "~" << "\n";
}
}
// } Driver Code Ends