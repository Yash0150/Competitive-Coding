#include<bits/stdc++.h>
using namespace std;

string S[13]={" "," ","ABC","DEF","GHI","JKL","MNO","PQR","MNO","PQR","STU","WXYZ"};

void printKeypadString(string input,string output,int i){
	if(i==input.size()){
		cout<<output<<endl;
		return;
	}
	int a=input[i]-'0';

	for(int j=0; j<S[a].size(); j++){
		//9810884774
		printKeypadString(input,output+S[a][j],i+1);
	}

}

int main(){
	string s="12";
	printKeypadString(s,"",0);
}