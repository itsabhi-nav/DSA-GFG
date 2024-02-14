//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
         int n=str.size();
        unordered_map<char,int>m;
        for(int i=0;i<n;i++)
        m[str[i]]++;
        int min_window=m.size();
        for(int i=0;i<n;i++)m.erase(str[i]);
        int l=0,ans=INT_MAX;
        for(int i=0;i<n;i++){
            m[str[i]]++;
                while(l<=i && m.size() == min_window){
                    ans=min(ans,i-l+1);
                    m[str[l]]--;
                    if(m[str[l]]==0){
                         m.erase(str[l]);
                    }
                    l++;
                }
        }
        if(ans==INT_MAX)return -1;
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends