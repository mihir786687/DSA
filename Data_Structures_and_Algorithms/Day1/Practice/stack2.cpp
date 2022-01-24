#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends

stack<pair<int,int> > s1;
void push(stack<int>& s, int a){
	// Your code goes here
	if(s1.empty()){
	    s1.push(make_pair(a,a));
	    s.push(a);
	}else{
	    s.push(a);
	    if(s1.top().second>a){
	        s1.push(make_pair(a,a));
	    }else{
	        s1.push(make_pair(a,s1.top().second));
	    }
	}
	
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n){
	    return true;
	}
	return false;
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return s.empty();
}

int pop(stack<int>& s){
	// Your code goes here
	s.pop();
	s1.pop();
	
}

int getMin(stack<int>& s){
	// Your code goes here
	if(!s.empty()){
	    int a= s1.top().second;
	
	return a;    
	}
	return -1;
	
}

//GFG = https://practice.geeksforgeeks.org/problems/special-stack/1