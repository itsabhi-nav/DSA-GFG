//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  
    long long int khushboo(string &s, int k){
        long long int count =0;
        unordered_map<char,int> freq;
        
        int left =0;
        
        for(int right =0; right<s.length(); right++){
            freq[s[right]]++;
            
            while(freq.size()>k){
                freq[s[left]]--;
                if(freq[s[left]]==0){
                    freq.erase(s[left]);
                }
                left++;
            }
            count += (right-left+1);
        }
        return count;
    }
  
    long long int substrCount (string s, int k) {
    	//code here.
    	
    	long long int atK = khushboo(s,k);
    	long long int atKminus1 = khushboo(s,k-1);
    	
    	return atK-atKminus1;
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	
cout << "~" << "\n";
}
}
// } Driver Code Ends