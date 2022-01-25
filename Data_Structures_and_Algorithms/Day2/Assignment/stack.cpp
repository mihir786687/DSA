#include<bits/stdc++.h>
using namespace std;

void add(stack<pair <int,int> > &stack1,int value){
    if(stack1.empty()){
        stack1.push({value,value});
    }else{
        pair<int,int> temp = stack1.top();
        if(temp.second > value){
            stack1.push({value,temp.second});
        }else{
            stack1.push({value,value});
        }
    }
}

void deleteTop(stack<pair <int,int> > &stack1){
    if(stack1.empty()){
        cout<<"The stack is empty!!!!!!!\n"<<"Please add some values first\n";
    }else{
        stack1.pop();
    }
}

int getMax(stack<pair <int,int> > &stack1){
    if(stack1.empty()){
        cout<<"The stack is empty!!!!!!!\n"<<"So there is no maximum value right now!!\n";
        return 0;
    }else{

    }
    pair<int,int> temp = stack1.top();
    return temp.second;
}

void printMenu(){
    cout<<"MENU\n";
    cout<<"Press 1 value to ADD values to stack\n"<<"\tFor example to add 5 to stack enter 1 5\n";
    cout<<"Press 2 to delete the TOP element from the stack\n";
    cout<<"Press 3 to get the maximum element of the stack\n";
    cout<<"Press 4 to print the MENU again\n";
    cout<<"Press 0 to exit\n";
}

int main(){
    cout<<"Enter the size of Stack\n";
    int n;
    cin>>n;
    stack<pair<int,int> > stack1;
    int l=INT_MAX,value,maximum;
    printMenu();
    while(l!=0){
        cin>>l;
        if(l==4){
            printMenu();
        }else if(l==2){
            deleteTop(stack1);
        }else if(l==3){
            maximum = getMax(stack1);
            if(!stack1.empty()){
                cout<<maximum<<"\n";
            }
            
        }else if(l==1){
            if(stack1.size()<n){
                cin>>value;
                add(stack1,value);
            }else{
                cout<<"The stack is full!!!!!!!\n";
            }
            
        }
    }
}