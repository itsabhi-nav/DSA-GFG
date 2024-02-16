//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string str)
    {
        // Your code here
        stack<char>s;
        
        for(int i =0; i<str.size(); i++){
            if(str[i]=='('|| str[i]=='{' || str[i]=='['){
                s.push(str[i]);
            }
            else {
                if(s.empty())
                return false;
                else
                if(( s.top()=='(' && str[i]==')' ) || (s.top()=='{' && str[i]=='}') || (s.top()=='[' && str[i]==']'))
                s.pop();
                else
                return false;
            } 
           
        }
        if(s.empty())
        return true;
        else
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends