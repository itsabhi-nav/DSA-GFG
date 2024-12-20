//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
      Node* rev(Node* head){
        if(!head)return NULL;
        Node* prev = NULL;
        Node* curr= head;
        while(curr!=NULL){
            Node* next = curr->next;
            curr->next=prev;
            prev = curr;
            curr= next;
        }
        head = prev;
        return head;
    }
    int dig(Node* head){
        if(head==NULL)return 0;
        Node* curr = head;
        while(curr!=NULL && curr->data==0){
            curr=curr->next;
        }
        if(curr==NULL){
            return 1;
        }
        int digit = 0;
        while(curr!=NULL){
            digit++;
            curr=curr->next;
        }
        return digit;
    }
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        Node* c1 = head1;
        Node* c2 = head2;
        while(c1!=NULL && c1->data==0){
            c1=c1->next;
        }
        while(c2!=NULL && c2->data==0){
            c2=c2->next;
        }
        if(c1==NULL && c2==NULL){
            Node *temp = new Node(0);
            return temp;
        }
        if(c1==NULL){
            return c2;
        }
        if(c2==NULL){
            return c1;
        }
        head2 = c2;
        head1 = c1;
        
        int dig1 = dig(head1);
        int dig2 = dig(head2);
        Node *high = NULL;
        Node* low = NULL;
        if(dig1>dig2){
            high = head1;
            low = head2;
        }else if(dig1<dig2){
            high = head2;
            low = head1;
        }else{
            Node* curr1 = head1;
            Node* curr2 = head2;
            
            while(curr1!=NULL && curr2!=NULL && curr1->data == curr2->data){
                curr1=curr1->next;
                curr2=curr2->next;
            }
            if(curr1==NULL){
                 Node *temp = new Node(0);
                return temp;
            }
            if(curr1->data>curr2->data){
                high = head1;
                low = head2;
            }else{
                low = head1;
                high = head2;
            }
        }
       high = rev(high);
       low = rev(low);
      int carry = 0;
      Node *head = NULL;
      Node *curr = NULL;
      while(low!=NULL){
          int val = 0;
          if(carry==1){
              high->data--;
          }
          if(high->data<low->data){
              val = (10+high->data)-low->data;
              carry =1;
            //   cout<<val<<" ";
          }else{
              val = high->data - low->data;
              carry = 0;
              
          }
          Node *temp = new Node(val);
          if(head==NULL){
              head = temp;
              curr = head;
          }else{
              curr->next = temp;
              curr = curr->next;
          }
          low=low->next;
          high = high->next;
      }
      
      while(high!=NULL){
          int val  =0;
          if(carry==1){
              val = high->data-1;
              if(val ==-1){
                  val = 9;
                  carry=1;
              }else{
                  carry=0;
              }
          }else{
              val = high->data;
          }
          Node *temp = new Node(val);
          if(head==NULL){
              head = temp;
              curr = head;
          }else{
              curr->next = temp;
              curr = curr->next;
          }
          high = high->next;
      }
      head = rev(head);
      curr = head;
      while(curr!=NULL && curr->data==0){
          curr=curr->next;
      }
      head = curr;
       return head;
    }
};

//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends