#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    vector < pair < int, int > > ar;
    long long cur=0,ans=0;
    cin >> n;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        ar.push_back({a,b});
    }
    sort(ar.begin(),ar.end());
    priority_queue< pair < int, int > , vector< pair < int, int> >, greater<  pair < int, int > > > minheap;
    i=1;
    minheap.push({ar[0].second,ar[0].first});
    cur=ar[0].first;
    while(!minheap.empty() || i<n)
    {
	while(i<n && ar[i].first<=cur)
	{
	    minheap.push({ar[i].second,ar[i].first});
	    i++;
	}
	if(minheap.empty() && i<n)
	{
	    cur=ar[i].first;
	    minheap.push({ar[i].second,ar[i].first});
	    i++;
	}
	pair < int, int > p = minheap.top();
	minheap.pop();
	cur+=(long long)(p.first);
	ans+=(long long)(cur)-(long long)(p.second);
    }
    cout << ans/n << endl;
    return 0;
}