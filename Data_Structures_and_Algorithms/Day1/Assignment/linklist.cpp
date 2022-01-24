#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int a){
        this->data = a;
        this->next = NULL;
    }
};
void printlinklist(node* head){
    while(head!=NULL){
        cout<<head->data<<"\n";
        head = head->next;
    }
}
int main(){
    cout<<"Enter the number of nodes\n";
    int n;
    cin>>n;
    node* head = NULL;
    node* prev = NULL;
    int temp,a;
    if(n>0){
        cout<<"Enter the values\n";
        cin>>temp;
        head = prev = new node(temp);
        for(int i=1;i<n;i++){
            cin>>a;
            node* current = new node(a);
            prev->next = current;
            prev = current; 
        }
    }
    else{
        cout<<"There are no elements in the list\n";
    }
    printlinklist(head);
}