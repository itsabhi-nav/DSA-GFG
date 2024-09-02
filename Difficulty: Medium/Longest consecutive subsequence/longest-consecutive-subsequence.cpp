//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      int count=1;
      int longest =1;
      
      sort(arr, arr+n);
      
      for(int i =1; i<n; i++){
            if(arr[i]!=arr[i-1]){
                if(arr[i]==arr[i-1]+1){
                    count++;
                }
                else{
                    longest = max(longest, count);
                    count =1;
                }
            }
      }
      
      return max(longest, count);
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends