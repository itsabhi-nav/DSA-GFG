//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string S) {
        // your code here
          unordered_map<char,int>mp;
        
        for(int i =0; i<S.size(); i++){
            char c = tolower(S[i]);
            mp[c]++;
        }
        
        for(char i= 'a'; i<='z'; i++){
            if(mp[i]==0)
                return 0;
        }
        return 1;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends