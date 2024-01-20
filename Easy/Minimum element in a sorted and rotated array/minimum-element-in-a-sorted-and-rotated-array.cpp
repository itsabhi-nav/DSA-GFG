//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
  int findMin(int arr[], int n) {
      int low=0, high=n-1;
    if (arr[low] <= arr[high]) {
        return arr[low];
    }
 
    // Binary search
    while (low <= high) {
        int mid = (low + high) / 2;
 
        // Check if mid is the minimum element
        if (mid-1 >= 0 && arr[mid] < arr[mid - 1]) {
            return arr[mid];
        }
        // If the left half is sorted, the minimum element
        // must be in the right half
        if (arr[mid] > arr[high]) {
            low = mid + 1;
        }
 
        // If the right half is sorted, the minimum element
        // must be in the left half
        else {
            high = mid - 1;
        }
    }
 
    // If no minimum element is found, return -1
    return -1;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends