//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int arr[], int n){
	    //code
	     //code here.
        int start =1;
        int end =n-2;
        int mid;
        
        if(arr[0] != arr[1]){
            return arr[0];
        }
        else if (arr[n - 1] != arr[n - 2])  
    {
        return arr[n - 1];
    }
        
        while(start<=end){
            mid = (start+end)/2;
            
            if((arr[mid]!=arr[mid-1]) &&(arr[mid]!=arr[mid+1])){
                return arr[mid];
            }
            
            else if (((mid%2)==0 && arr[mid]==arr[mid+1]) || ((mid%2)==1 && arr[mid]==arr[mid-1]))
            start=mid+1;
            else
            end=mid-1;
        }
        return -1;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends