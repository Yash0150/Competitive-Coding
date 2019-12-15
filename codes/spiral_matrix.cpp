#include <bits/stdc++.h> 
using namespace std; 

int spiralPrint(int m, int n, int a[][]) 
{ 
	int i, k = 0, l = 0; 

	while (k < m && l < n) 
	{ 
		for (i = l; i < n; ++i) 
		{ 
			cout<<a[k][i]<<" "; 
		} 
		k++; 

		for (i = k; i < m; ++i) 
		{ 
			cout<<a[i][n-1]<<" "; 
		} 
		n--; 

		if ( k < m) 
		{ 
			for (i = n-1; i >= l; --i) 
			{ 
				cout<<a[m-1][i]<<" "; 
			} 
			m--; 
		} 

		if (l < n) 
		{ 
			for (i = m-1; i >= k; --i) 
			{ 
				cout<<a[i][l]<<" "; 
			} 
			l++;	 
		}		 
	} 
} 

int main() 
{ 
	int m,n;
	cin>>m>>n;
	int A[m][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			int a; 
			cin>>a;
			A[i][j]=a;

		}
	}

	spiralPrint(R, C, A); 
	return 0; 
} 
