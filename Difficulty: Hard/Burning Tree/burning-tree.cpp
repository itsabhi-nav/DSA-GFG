//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//User function Template for C++

/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
     int maxi = 0;
  pair<int,int> traverse(Node* root, int &target){
      
      int leftval = 0;
      int LeftContainsTarget = false;
      
      int rightval = 0;
      int RightContainsTarget = false;
      
      if(root->left){
        pair<int,int>p1 = traverse(root->left, target);
        leftval = p1.first;
        LeftContainsTarget = p1.second;
      }
      
      if(root->right){
        pair<int,int>p2 = traverse(root->right, target);
        rightval = p2.first;
        RightContainsTarget = p2.second;
      }
      
      
      if(LeftContainsTarget){
          maxi = max(maxi, leftval + rightval);
          return {leftval+1, true};
      }else if(RightContainsTarget){
          maxi = max(maxi, leftval + rightval);
          return {rightval+1, true};
      }
      
      bool check = false;
      if( root-> data == target){
          maxi = max(maxi, max(leftval, rightval));
          check = true;
          return { 1 , true};
      }
      
      return {max(leftval, rightval)+1, check};
      
      
  }
  
  public:
    int minTime(Node* root, int target) 
    {
        pair<int,int> p = traverse(root, target);
        // cout<<maxi<<endl;
        return maxi;
        
        
    }

};

//{ Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}

// } Driver Code Ends