#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
 
int main(){
    ll t,n,m,x,y;
    cin>>t;
    //string s;
    while(t--){
        cin>>n;
        ll a[n];
        x=0;
        y=0;
        for(int i=0;i<n;++i)
        {
           cin>>a[i];
           x = (x^(a[i]));
        }
        m=x;
        for(int i=0;i<n;++i){
            y= (y^(a[i]));
           if((y&(x^y))>m)
               m=(y&(x^y));
        }
         
        cout<<m;
            
        cout<<endl;     
    }
        
    return 0;
}

