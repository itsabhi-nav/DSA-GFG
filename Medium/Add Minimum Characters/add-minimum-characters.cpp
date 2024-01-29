//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        string rev = str;
    reverse(rev.begin(), rev.end());
    int size = str.size();
    str += '$';
    str += rev;

    // Now implement KMP Algorithm
    int n = str.size();
    vector<int> lps(n, 0);
    int pre = 0, suf = 1;
    while (suf < str.size()) {
        if (str[pre] == str[suf]) {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        } else {
            if (pre == 0) {
                suf++;
            } else {
                pre = lps[pre - 1];
            }
        }
    }

    // Correct the return statement
    return size - lps[n - 1];
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends