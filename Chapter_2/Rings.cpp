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
const int INF = 1e6;

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<char>> grid(n + 2, vector<char>(m + 2, '.'));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> grid[i][j];
        }
    }
    int rcnt = 0;
    vector<vi> ring(n + 2, vi(m + 2, INF));
    for(int k = 0; k <= n/2 + 2; k++){
        for(int i = 0; i <= n + 1; i++){
            for(int j = 0; j <= m + 1; j++){
                if(grid[i][j] == '.'){
                    ring[i][j] = 0;
                    continue;
                }
                if(ring[i-1][j] == k-1|| ring[i + 1][j] == k-1 || ring[i][j - 1] == k-1 || ring[i][j+1] == k-1){
                    ring[i][j] = min(ring[i][j], k);
                    rcnt = max(rcnt, ring[i][j]);
                }
            }
        }
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= m; j++){
            if(ring[i][j] == 0){
                (rcnt >= 10)? cout << "...": cout << "..";
            } else{
                if(ring[i][j] >= 10){
                    cout << "." << ring[i][j];
                } else{
                    (rcnt >= 10)? cout << "..":cout << ".";
                    cout << ring[i][j];
                }
            }
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