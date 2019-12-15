#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n;
    cin>>n;
    vector <ll> v;
    for(ll i=0; i<n; i++){
        ll a;
        cin>>a;
        v.push_back(a);
    }
    set <pair<int,int> > s;
    int t;
    cin>>t;
    sort(v.begin(),v.end()) ;   
    int j=0,x=n-1;        //Just sort it 
    for(int y=0; y<n;y++){
    	cout<<v[y]<<" ";
    }
    cout<<endl;
    while(x>j){
    //for(int j=i+1; j<n; j++){
        if(v[x]+v[j]==t){
            s.insert(make_pair(v[j],v[x]));
            //cout<<"a";
            x--;
            j++;
        }
        if(v[x]+v[j]>t){
        	x--;
        	//cout<<x;
        }
        if(v[x]+v[j]<t){
        	j++;
        	//cout<<"c";
        }
    	//x--;
    	//j++;
    //}
    }

    set <pair<int,int> >:: iterator i;
    for(i=s.begin(); i != s.end();i++){
    	pair <int,int> x =*i;
    	cout<< x.first<<" and "<<x.second<<endl;
    }
	return 0;
}