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
    char su; cin >> su;
    int ans = 0;
    for(int i= 0; i < 4 * n; i++){
        string s; cin >> s;
        if(s[0] == 'A')ans += 11;
        else if(s[0] == 'K')ans += 4;
        else if(s[0] == 'Q') ans += 3;
        else if(s[0] == 'J'){
            if(s[1] == su) ans += 20;
            else ans += 2;
        } else if(s[0] == 'T') ans += 10;
        else if(s[0] == '9'){
            if(s[1] == su) ans += 14;
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