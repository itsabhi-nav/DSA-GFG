//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
  
  int nums(char C){
        if(C == 'I')
        return 1;
        else if(C == 'V')
        return 5;
        else if(C == 'X')
        return 10;
        else if (C == 'L')
        return 50;
        else if (C=='C')
        return 100;
        else if (C =='D')
        return 500;
        else if(C=='M')
        return 1000;
        else
        return 0;
    }
    
    int romanToDecimal(string &str) {
        // code here
        int index =0;
        int sum =0;
        
        while (index < str.size()-1){
            if(nums(str[index])<nums(str[index+1]))
                sum -= nums(str[index]);
            else
                sum += nums(str[index]);
            index++;
        }
        
        sum += nums(str[index]);
        return sum;
    }
    
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends