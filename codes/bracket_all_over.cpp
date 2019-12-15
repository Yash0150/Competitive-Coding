#include<bits/stdc++.h>
using namespace std;
long long sum=0;
long long bracket(string s,long long o,long long c,long long n){
	if(c+s.size()+o==n){
		sum++;
		return 0;
	}
	if(o<n/2){
		bracket('('+s,o+1,c,n);
	}
	if(o>c){
		bracket(s+')',o,c+1,n);
	}
	return 0;

}

int main(){
	long long n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	long long open,close;
	open=count(s.begin(),s.end(),'(');
	close=count(s.begin(),s.end(),')');
	bracket(s,open,close,n);
	cout<<sum%1000000009;
}