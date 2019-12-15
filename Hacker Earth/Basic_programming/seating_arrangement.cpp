#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a= n%12;
		if(a>0 && a<=6){
			cout<<n+(12-2*(a-1)-1);
			if(a==1 || a==6){
				cout<<" WS ";
			}
			else if(a==2 || a==5){
				cout<<" MS ";
			}
			else{
				cout<<" AS ";
			}
			cout<<endl;
		}
		else if(a>6 && a<12){
			int b=a%6;
			cout<<n-(2*(b-1) +1);
			if(b==1 || b==6){
				cout<<" WS ";
			}
			else if(b==2 || b==5){
				cout<<" MS ";
			}
			else{
				cout<<" AS ";
			}
			cout<<endl;
		}
		else{
			cout<<(n-12)+1;
			cout<<" WS ";
			cout<<endl;
		}
	}
}