#include<bits/stdc++.h>
using namespace std;
int p=1;

int triplets(int n){
	int m=n+1,mm=(n-1),mmm=(n-2);
	
	if(p){
		while(true){
				int aa,bb,cc;
				aa=n*n;
				bb=(n+1)*(n+1);
				cc=(mm)*(mm);
				if((aa+cc)==bb){
					cout<<mm<<" "<<n+1;
					break;
				}
				//else if((a+b)<c){
			//	cout<<-1;
			//	break;
			//	}
				else if((aa+cc)>bb){
					mm--;
				}
				else if((aa+cc)<bb){
				  // cout<<-1;
					break;
				}
			}
		
	}
	if(p){
		while(true){
			int aaa,bbb,ccc;
			aaa=n*n;
			bbb=(n-1)*(n-1);
			ccc=(mmm)*(mmm);
			if((bbb+ccc)==aaa){
				cout<<mmm<<" "<<(n-1);
				p=0;
				break;
			}
			else if((bbb+ccc)<aaa){
			   // cout<<-1;
				break;
			}
			else if((bbb+ccc)>aaa){
				mmm--;
			}
		}
	}
	if(p){
		while(true){
					int a,b,c;
					a=n*n;
					b=m*m;
					c=(m+1)*(m+1);
					if((a+b)==c){
						cout<<m<<" "<<m+1;
						p=0;
						break;
						}
					else if((a+b)<c){
						cout<<"-1";
						break;
					}
					else if((a+b)>c){
						m++;
			}
		}	
	}
}

int main(void){
	int n;
	cin>>n;
	if(n<=2){
		cout<<-1;
	}
	else{
		triplets(n);
	}
}
