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
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    vector<vll> im(h, vll(w));
    for(int i = 0; i < h; i++){
        for(int j = 0; j< w; j++){
            cin >> im[i][j];
        }
    }
    vector<vll> ke(n, vll(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ke[n-i-1][m-j-1];
        }
    }

    for(int i = 0; i <= h-n; i++){
        for(int j = 0; j <= w - m; j++){
            int ans = 0;
            for(int ii = 0; ii < n; ii++){
                for(int jj = 0; jj < m; jj++){
                    ans+= im[i + ii][j+jj] * ke[ii][jj];
                }
            }
            cout << ans << " ";
        }
        cout << endl;
    }
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