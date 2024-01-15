//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    int normalSubArraySum(int arr[],int n){
        int curr=arr[0];
        int res=arr[0];
        for(int i=1;i<n;i++){
            curr=max(curr+arr[i],arr[i]);
            res=max(curr,res);
        }
        return res;
    }
    int circularSubarraySum(int arr[], int num){
        int normalSum=normalSubArraySum(arr,num);
        if(normalSum<0){
            return normalSum;
        }
        int sum=0;
        for(int i=0;i<num;i++){
            sum+=arr[i];
            arr[i]=-arr[i];
        }
        int circularSum=sum+normalSubArraySum(arr,num);
        return max(circularSum,normalSum);
      
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends