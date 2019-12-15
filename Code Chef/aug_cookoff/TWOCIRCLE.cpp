#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define pf push_front
#define ins insert
#define mp make_pair
#define len(s) s.length()
#define frse(i,l,r)  for(i = l; i <= r; ++i)
#define fr(i,l,r)  for(i = l; i <  r; ++i)
#define fres(i,r,l)  for(i = r; i >= l; --i)
#define endl "\n"
#define all(v) v.begin(), v.end()
#define mem(n,m) memset(n, m, sizeof(n))
#define pii pair<int, int >
#define pll pair<long long ,long long >
#define usuu unordered_set<unsigned >
#define usii unordered_set<int >
#define usll unordered_set<long long >
#define suu set<unsigned >
#define sii set<int >
#define sll set<long long >
#define vec vector
#define vuu vector<unsigned > 
#define vii vector<int > 
#define vbb vector<bool > 
#define vll vector<long long >
#define vlu vector<long long unsigned >
#define mll map<long long , long long >
#define ret return 0
#define what_is(x) cout << #x << " is: " << x << endl;

#define boost ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define MOD   1000000007
#define PI	  3.14159265358979323846

typedef long long ll;
typedef long long unsigned llu;
typedef long double	 ldo;
typedef double	db;

int main()	{
	int T, X1, Y1, R1, X2, Y2, R2;
	cin>>T;
	while (T--) {
		cin>>X1>>Y1>>R1>>X2>>Y2>>R2;
		double B = abs(X2 - X1);
		double P = abs(Y2 - Y1);
		double H = sqrt(
			(B * B)
			+
			(P * P)
		);
		// cout << fixed << setprecision(7) << H << endl;
		if (R2 >= R1 + H) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
			double x, y;
			if (H == 0.0) {
				x = X1 - R1;
				y = Y1 - R1;
			}
			else {
				if (X1 < X2) {
					x = X1 - R1 * B / H;
				} else {
					x = X1 + R1 * B / H;
				}
				if (Y1 < Y2) {
					y = Y1 - R1 * P / H;
				} else {
					y = Y1 + R1 * P / H;
				}
			}
			cout << fixed << setprecision(7) << x << " " << y << endl;
		}
	}

	ret;
}