//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
      
    vector<int> pos, neg;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    int idxPos = 0, idxNeg = 0;
    int lenPos = pos.size(), lenNeg = neg.size();
    int idx = 0;

    while (idxPos < lenPos && idxNeg < lenNeg) {
        arr[idx++] = pos[idxPos++];
        arr[idx++] = neg[idxNeg++];
    }

 
    while (idxPos < lenPos) {
        arr[idx++] = pos[idxPos++];
    }

    while (idxNeg < lenNeg) {
        arr[idx++] = neg[idxNeg++];
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    if (t == 1) {
        cout << -1 << endl;
        return 0;
    }
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends