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
    int n, k;
    cin >> n >> k;
    vector<pii> a;
    for(int i = 0; i < n ;i++){
        int tmp; cin >> tmp;
        a.pb(mp(tmp, 1));
        a.pb(mp(tmp + 1000, -1));
    }
    sort(all(a));
    int ans = 0;
    int cnt = 0;
    for(int i = 0; i < sz(a); i++){
        cnt += a[i].second;
        ans = max(ans, cnt);
    }
    cout << (ans + k -1)/k << endl;
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