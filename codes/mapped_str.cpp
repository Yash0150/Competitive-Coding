#include<bits/stdc++.h>
using namespace std;
string table[28]={"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
void print(string s,string o,string a,int i,int n){
	if(i==n){
		cout<<a<<endl;
		return;
	}
	if((stoi(o)<=26)){
		//print(s,o,a,i+1,n);
		//print(s,"",a,i+1,n);
		string b=(table[stoi(o)]);
		//print(s,o+s[i],a+b,i+1,n);
		print(s,"",a+b,i+1,n);
		print(s,o+s[i],a,i+1,n);
	}
	else{
		return;
	}
}

int main(){
	string s="123",o="",a="";
	cin>>s;
	int n=s.size();
	print(s,o,a,0,n);
}