#include<bits/stdc++.h>
using namespace std;

int replace(string s, string o,int i){
	if(i>=s.size()){
		cout<<o;
		return 0;
	}
	if((i+1<s.size())&&s[i]=='p'&&s[i+1]=='i'){
		o=o+"3.14";
		replace(s,o,i+2);
	}
	else{
		o=o+s[i];
		replace(s,o,i+1);
	}
}

int main(){
	int t;
	cin>>t;
	while(t){
		string s,o="";
		cin>>s;
		replace(s,o,0);
		t--;
		cout<<endl;
	}
}