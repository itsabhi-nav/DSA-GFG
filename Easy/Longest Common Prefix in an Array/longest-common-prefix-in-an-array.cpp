//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        sort(arr, arr+n);
        string s1 = arr[0];
        string s2= arr[n-1];
        
        int size1 = s1.size();
        int size2 = s2.size();
        
        int i=0 , j=0;
        string ans;
        
        while(i<size1 && j<size2){
            if(s1[i]==s2[i]){
                ans.push_back(s1[i]);
            }
            else{
                break;
            }
            i++;
            j++;
        }
        if(ans.size()==0){
            return "-1";
        }
        else return ans;
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
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends