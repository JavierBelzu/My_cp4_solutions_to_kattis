#include <bits/stdc++.h>
using namespace std;

using ll   = long long;
using ull  = unsigned long long;
using pii  = pair<int,int>;
using vi   = vector<int>;
using vll  = vector<ll>;
using vl   = vector<long>;

#define all(x)      (x).begin(), (x).end()
#define sz(x)       (x).size()
#define pb          push_back
#define mp          make_pair


void solve() {
    int n, m; 
    cin >> n >> m;
    vector<vll> a(n+1, vll(m+1, 0));
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <=m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=m; j++){
            a[i][j] = max(a[i][j] + a[i-1][j], a[i][j] + a[i][j-1]);
        }
    }
    for(int i = 1; i <= n; i++){
        cout << a[i][m] << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
        
    }
    return 0;
}