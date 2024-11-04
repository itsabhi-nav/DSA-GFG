//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
     Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        
        while (current != nullptr) {
            next = current->next;   // Store next node
            current->next = prev;   // Reverse current node's pointer
            prev = current;         // Move prev to current
            current = next;         // Move to the next node
        }
        
        return prev;  // New head of the reversed list
    }

    // Function to add two numbers represented by linked lists
    Node* addTwoLists(Node* num1, Node* num2) {
        // Step 1: Reverse both input linked lists
        num1 = reverseList(num1);
        num2 = reverseList(num2);
        
        Node* dummy = new Node(0);  // Dummy node to simplify result list creation
        Node* current = dummy;      // Pointer to construct the result list
        int carry = 0;              // Initialize carry to 0
        
        // Step 2: Traverse both lists until both are exhausted and no carry remains
        while (num1 != nullptr || num2 != nullptr || carry != 0) {
            int sum = carry;  // Start with the carry value
            
            // Add the data of the current nodes of both lists, if they exist
            if (num1 != nullptr) {
                sum += num1->data;  // Add value from num1
                num1 = num1->next;  // Move to the next node in num1
            }
            if (num2 != nullptr) {
                sum += num2->data;  // Add value from num2
                num2 = num2->next;  // Move to the next node in num2
            }
            
            // Compute the new digit and update carry
            carry = sum / 10;         // Carry for the next digit
            sum = sum % 10;           // The digit to store in the new node
            
            // Append the new digit to the result list
            current->next = new Node(sum);  // Create a new node with the sum
            current = current->next;        // Move to the next position in result list
        }
        
        // Step 3: Reverse the result linked list before returning
        Node* result = reverseList(dummy->next);
        
        return result; 
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends