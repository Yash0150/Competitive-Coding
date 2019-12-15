#include<bits/stdc++.h>
using namespace std;

void print(string s, string o, char l, int i){
	if(i==s.size()){
		cout<<o;
		return;
	}

	if(s[i]==l){
		print(s,o+"*"+s[i],s[i],i+1);
	}
	else{
		print(s,o+s[i],s[i],i+1);
	}

}

int main(){
	string s="hello",o="";
	//cin>>s;
	if(s.size()==1){
		cout<<s;
		return 0;
	}
	o=o+s[0];
	print(s,o,s[0],1);
}