#include<bits/stdc++.h>
using namespace std;
//vector <int> v;

bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 

int main() {
	ios_base::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	vector <int> v1;
   	for(int j=0;j<n; j++){
		int a;
		cin>>a;
		v1.push_back(a);
	}
	int m=v1[0];
	for(int k=0; k<n; k++){	
		if(v1[k]>m){
			m=v1[k];
		}
	}
	int count1=0;
	int i;
	vector <int> v;
	for(i=2; count1 != m; i++){
		if(isPrime(i)){
			count1++;
			v.push_back(i);
		}
	}
	for(int i=0; i<n; i++){
		int x=v1[i]-1;
		cout<<v[(x)]<<endl;
	}
}
