#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long int n=s.size();
        long int a[n+1]={0},b[n+1]={0},count=0;
        for(long int i=0;i<n;i++){
            if((s[i]=='0' && s[i-1]=='1') || (s[i]=='1' && s[i-1]=='0')){
                count++;
      		}
        }
        for(long int i=0;i<n;i++){
            if(s[i]=='0'){
                b[i+1]=b[i];
                a[i+1]=a[i]+1;
            }
            else{
                b[i+1]=b[i]+1;
                a[i+1]=a[i];
            }
        }
    long int ans=2;
    while(ans*ans+ans<=n){
        long int k=ans*ans+ans;                
        for(long int i=k;i<=n;i++){
                    long int x1=b[i]-b[i-k];
                    long int z1=a[i]-a[i-k];

                    if(x1*x1==z1)
                    count++;
                }
                ans++;
    }
    
        cout<<count<<endl;
    }
}