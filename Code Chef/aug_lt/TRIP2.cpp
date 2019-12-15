#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define inf 0x3f3f3f3f
#define endl '\n'
// #define case(i) "Case #" << i << ": "

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int N = n * m;

        int arr[n][m];
        int cur = 1;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                arr[i][j] = cur;
                cur++;
            }
        }

        int dp[N];
        vector<int> v;
        for(int j = 0; j < m; ++j) {
            for(int i = 0; i < n; ++i) {
                v.push_back(arr[i][j]);
            }
        }

        for(int i = 0; i < N; ++i) {
            int t = i + 1;
            if(N % t == 0) dp[i] = N / t;
            else dp[i] = N / t + 1;

            for(int j = 0; j < N; j += t) {
                if((v[j] - 1) % t != 0) dp[i]++;
            }
        }

        for(int i = 0; i < N; ++i) {
            cout << dp[i] << " ";
        }
        cout << endl;
    }
}