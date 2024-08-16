//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

bool comp(pair<int,int>a, pair<int,int>b){
   return a.second < b.second;
}

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
   int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int, int>> timer;
        
        for(int i = 0; i < n; i++) {
            timer.push_back({start[i], end[i]});
        }
        
        sort(timer.begin(), timer.end(), comp);
        
        int total = 0;
        int ending = -1;
        
        for(int i = 0; i < n; i++) {
            if(timer[i].first > ending) {
                total++;
                ending = timer[i].second;
            }
        }
        
        return total;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends