//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    
   int firstOccurence(int arr[], int n, int x){
        int first =0;
        int last = n-1;
        int res = -1;
        
        while(first <= last){
            
          int mid = (first +(last-first)/2);
            
            if(arr[mid]==x){
                res =mid;
                last =mid-1;
            }
            else if(arr[mid]>x)
            last =mid-1;
            
            else
            first =mid+1;
        }
        return res;
    }
    
    int lastOccurence(int arr[], int n, int x){
        int first =0; 
        int last =n-1;
        int res = -1;
        
        while(first<=last){
            
          int mid= (first + (last-first)/2);
            
            if(arr[mid]==x){
                res = mid;
                first = mid+1;
            }
            else if(arr[mid]>x)
            last =mid-1;
            
            else
            first =mid+1;
        }
        return res;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
      vector<int>v;
      v.push_back(firstOccurence(arr,n,x));
      v.push_back(lastOccurence(arr,n,x));
      return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends