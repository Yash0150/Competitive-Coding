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
    //int j=0,x=n-1;        //Just sort it 
    
    for(int y=0; y<n; y++){
        int j=y+1,x=n-1;
        while(x>j){
        //for(int j=i+1; j<n; j++){
            if(v[x]+v[j]+v[y]==t){
                if(y!=j && y!=x){
                    ((cout<<v[y]<<", "<<v[j]<<" and "<<v[x]<<endl));
                }
                //cout<<"a";
                x--;
                j++;
            }
            if(v[x]+v[j]+v[y]>t){
                x--;
               //cout<<x;
            }
            if(v[x]+v[j]+v[y]<t){
                j++;
            //cout<<"c";
            }
        //x--;
        //j++;
        }
    }

    /*set <pair<int,pair<int,int>> >:: iterator i;
    for(i=s.begin(); i != s.end();i++){
        pair <int,pair<int,int>> x =*i;
        pair<int,int> z= *(x.second);
        cout<< x.first<<" and "<<x.second.first<<" and "<<x.second.second<<endl;
    }*/
    return 0;
}