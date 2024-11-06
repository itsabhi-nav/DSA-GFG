//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>result;
        vector<int> combination;
         sort(A.begin(), A.end());
        A.erase(unique(A.begin(), A.end()), A.end());
        
        findcombo(A,  result,combination,  B, 0);
        return result; 
        
    }
      void  findcombo(vector<int>&A,  vector<vector<int>>& result, vector<int> &combination, int B, int start ){
            if(B==0){
                result.push_back(combination);
                return;
            }
            
            if(B<0){
                return;
            }
            
            int n = A.size();
            
            for(int i = start; i<n; i++){
                combination.push_back(A[i]);
                findcombo(A, result, combination, B-A[i], i);
                combination.pop_back();
            }
      }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            A.push_back(x);
        }   
        int sum;
        cin>>sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
   		if(result.size()==0){
   			cout<<"Empty";
   		}
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    
cout << "~" << "\n";
}
}	
// } Driver Code Ends