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
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    vi pref(n), suf(n);
    pref[0] = a[0];
    for(int i = 1; i < n; i++){
        pref[i] = max(pref[i-1], a[i]);
    }
    suf[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        suf[i] = min(suf[i+1], a[i]);
    }
    int ans = 0;
    for(int i = 0; i< n; i++){
        if(i != 0 && i != n-1){
            if(a[i] > pref[i-1] && a[i] < suf[i + 1]){
                ans++;
            }
        } else if(i == 0){
            if(a[i] < suf[i+1]) ans++;
        } else if(i == n-1){
            if(a[i] > pref[i-1]) ans++;
        }
    }
    cout << ans << endl;
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