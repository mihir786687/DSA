//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
        Node* temp = head;
        int c = 0;
        int i=0;
        while(temp!=NULL){
            if(i==0){
                temp->data=temp->data+1;
            }
            else{
                temp->data=temp->data+c;
                c=0;
            }
            
            if(temp->data>=10){
                temp->data = temp->data%10;
                c = 1;
            }
            temp = temp->next;
            i++;
        }
        /*if(temp->data == 9){
            temp->data=temp->data+1+c;
            c=0;
            if(temp->data>=10){
                temp->data = temp->data%10;
                c = 1;
            }
            
        }*/
        current = head;
        prev = NULL, next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
        if(c==1){
            temp = new Node(c);
            temp->next = head;
            head = temp;
        }
        
        return head;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 
  // } Driver Code Ends


  //GFG - https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1