//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
            
        sort(arr,arr+n);
        int maxLen=0,i=0,j=0;
        string ans="";
        while(i<n){
            string temp=arr[i];
            int count=0;
            while(i<n&&j<n&&temp==arr[j]){
                count++;
                j++;
                
            }
            if(count>maxLen){
                 maxLen=count;
                 ans=arr[i];
            }
            if(count==maxLen){
                 if(arr[i]<ans)
                 ans=arr[i];
            }
            i=j;
        }
        return {ans,to_string(maxLen)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends