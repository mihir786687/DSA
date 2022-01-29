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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout<<"Enter the number of operations on Stack\n";
    int n;
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string s[n];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    stack<pair<int,int> > stack1;
    int value,maximum;
    for(int i=0;i<n;i++){
        if(s[i][0]=='1'){
            string str = s[i].substr(2, s[i].length()-2);
            add(stack1,stoi(str));
        }else if(s[i][0]=='2'){
            deleteTop(stack1);
        }else if(s[i][0]=='3'){
            maximum = getMax(stack1);
            if(!stack1.empty()){
                cout<<maximum<<"\n";
            }
        }
    }
    return 0;
}