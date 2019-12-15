#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<char,int>m3;


ll cal(int j,string s){
	ll base = 1;
	//char *end; 
	long long int number=0;
	int x=s.size();  
 	for(ll i=x-1; i>=0; i--){
 		number+=m3[s[i]]*base;
 		base*=j;
 		if(number>=1000000000000){
 			return 1000000000010;
 		}
 	}
	return number;
}

int main(){
	/*int base = 5;
	char numberString[] = "13a";
	char *end; 
	long long int number;
	
	number = strtoll(numberString, &end, base);*/
	m3['0']=0;
	m3['1']=1;
	m3['2']=2;
	m3['3']=3;
	m3['4']=4;
	m3['5']=5;
	m3['6']=6;
	m3['7']=7;
	m3['8']=8;
	m3['9']=9;
	m3['A']=10;
	m3['B']=11;
	m3['C']=12;
	m3['D']=13;
	m3['E']=14;
	m3['F']=15;
	m3['G']=16;
	m3['H']=17;
	m3['I']=18;
	m3['J']=19;
	m3['K']=20;
	m3['L']=21;
	m3['M']=22;
	m3['N']=23;
	m3['O']=24;
	m3['P']=25;
	m3['Q']=26;
	m3['R']=27;
	m3['S']=28;
	m3['T']=29;
	m3['U']=30;
	m3['V']=31;
	m3['W']=32;
	m3['X']=33;
	m3['Y']=34;
	m3['Z']=35;
	
	ll t,a;
	string b;
	cin>>t;
	while(t--){
		map<ll,ll> m1;
		ll n,p=0;
		cin>>n;
		for(ll i=0; i<n; i++){
			cin>>a>>b;
			//map<ll,ll>m1;
			ll g=-2;
			string s=b;
			int x=0;
			char y='0';
			if(a==-1){
				for(ll j=0; j<s.size(); j++){
					if(s[j]>y){
						y=s[j];
					}
				}
				if(y>='A'){
					x=y-'0'-6;
				}
				else{
					x=y-'0'+1;
				}
				//cout<<x;
				for(ll j=x; j<=36; j++){
					ll num=cal(j,s);
					if(num==g){
						break;
					}
					
					m1[num]++;
					g=num;
					
					//cout<<num<<" "<<j<<endl;
					
				}
			}
			else{
				ll num=cal(a,b);
				
				m1[num]++;
			}
				
		}
		ll flag=0;
		for(auto i:m1){
			//cout<<i.first<<" "<<i.second<<endl;
			if(i.second==n && i.second<1000000000000){
				cout<<i.first<<endl;
				flag=1;
				break;
			}
				
		}
		if(flag==0){
			cout<<-1<<endl;
		}
	}
}
