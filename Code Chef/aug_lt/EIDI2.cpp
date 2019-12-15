#include<bits/stdc++.h>
using namespace std;
#define ll long long

void pairsort(ll a[], ll b[], int n) 
{ 
    pair<int, char> pairt[n]; 
  
    // Storing the respective array 
    // elements in pairs. 
    for (int i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    // Sorting the pair array. 
    sort(pairt, pairt + n); 
      
    // Modifying original arrays 
    for (int i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    }
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll A[3],B[3],p=0;
		for(int i=0; i<3; i++){
			cin>>A[i];
		}
		for(int i=0; i<3; i++){
			cin>>B[i];
		}
		pairsort(A,B,3);
		for(int i=0; i<2; i++){
			if(A[i]<A[i+1]){
				if(B[i]>=B[i+1]){
					cout<<"NOT FAIR"<<endl;
					p=1;
					break;
				}
			}
			if(A[i]==A[i+1]){
				if(B[i]!=B[i+1]){
					cout<<"NOT FAIR"<<endl;
					p=1;
					break;
				}
			}//cout<<endl;
		}
		
		cout<<endl;
		if(p==0){
			cout<<"FAIR"<<endl;
		}
	}
}