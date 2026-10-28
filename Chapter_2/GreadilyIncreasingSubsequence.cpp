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
    int n; cin >> n;
    vi a(n);
    vi ans;
    int j = -1;
    for(int i = 0; i< n; i++){
        cin >> a[i];
        if(ans.empty() || a[i] > ans[j]){
            j++;
            ans.pb(a[i]);
        }
    }
    cout << ans.size() << endl;
    for(auto x: ans) cout << x << " ";
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