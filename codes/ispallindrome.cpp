#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0; i<(n/2); i++){
		if(s[i]!=s[n-i-1]){
			cout<<"false";
			return 0;
		}
	}
	cout<<"true";
	return 0;
}