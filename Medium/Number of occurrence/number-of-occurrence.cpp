//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
		int firstOccurence(int arr[], int n, int x){
		    int first =0;
		    int last =n-1;
		    int res =-1;
		    
		    while(first<=last){
		        int mid = (first+(last-first)/2);
		        if(arr[mid]==x){
		            res=mid;
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
		    int res =-1;
		    
		    while(first<=last){
		        int mid = (first+(last-first)/2);
		        if(arr[mid]==x){
		            res=mid;
		            first=mid+1;
		        }
		        
		        else if(arr[mid]>x)
		        last =mid-1;
		        
		        else
		        first =mid+1;
		    }
		    return res;
		}
		
	int count(int arr[], int n, int x) {
	    // code here
        vector<int>v;
        int first = firstOccurence(arr,n,x);
        int last = lastOccurence(arr,n,x);
        
         if (first == -1)
            return 0; // Element not found
        else
            return last - first + 1;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends