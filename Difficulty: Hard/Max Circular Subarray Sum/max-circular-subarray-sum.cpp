//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    
    int maxSub(vector<int> &arr){
        int n = arr.size();
        int sum =0;
        int khushboo = arr[0];
        
        for(int i =0; i<n; i++){
            sum += arr[i];
            khushboo = max(sum, khushboo);
             if (sum < 0) {
            sum = 0;
        }
        }
        return khushboo;
        
    }
    
    int minSub(vector<int> &arr){
           int n = arr.size();
        int sum =0;
        int khushboo = arr[0];
        
        for(int i =0; i<n; i++){
            sum += arr[i];
            khushboo = min(sum, khushboo);
             if (sum > 0) {
            sum = 0;
        }
        }
        return khushboo;
    }
    
    int circularSubarraySum(vector<int> &arr) {
            int n = arr.size();
            
            int maxmSub = maxSub(arr);
            
            int minmSub = minSub(arr);
            int sum =0;
            for(int i =0; i<n; i++){
                sum += arr[i];
            }
            
            if(sum == minmSub){
                return maxmSub;
            }
            
            return max(maxmSub,  sum-minmSub);
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
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends