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
      int ans =0;
      unordered_set<int>mp;
      
      for(int i =0;i<n;i++){
          mp.insert(arr[i]);
      }
      
      for(int i =0;i<n;i++){
          
          if(mp.find(arr[i]-1) != mp.end()){
              continue;
          }
          else{
              int count =0;
              int current =arr[i];
              while(mp.find(current) != mp.end()){
                  count++;
                  current++;
              }
              ans =max(ans,count);
          }
          
      }
      return ans;
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