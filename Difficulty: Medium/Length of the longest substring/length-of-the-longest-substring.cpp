//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        vector<int>count(26,0);
        int first =0;
        int second =0;
        int end =0;
        
        while(second<s.size()){
            if(count[s[second]- 'a']==0){
                count[s[second]-'a']=1;
                end = max(end, second-first+1);
                second++;
            }
            
            else{
                count[s[first]-'a']=0;
                first++;
                
            }
        }
        return end;
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
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends