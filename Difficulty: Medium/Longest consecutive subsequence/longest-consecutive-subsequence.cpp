//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(vector<int>& arr) {
        // Your code here
        unordered_set<int>s(arr.begin(), arr.end());
        
        int longest =0;
        
        for(int i =0; i<arr.size(); i++){
            int num = arr[i];
            
            if(s.find(num-1) == s.end()){
                int currentNum =num;
                int currentStreak =1;
            
            
            while(s.find(currentNum+1)!= s.end()){
                currentNum++;
                currentStreak++;
            }
            
            longest = max(longest, currentStreak);
            }
        }
        return longest;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.findLongestConseqSubseq(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends