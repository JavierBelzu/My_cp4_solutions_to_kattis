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
    int n, k; cin >> n >> k;
    vector<string> cards(n + 1, "-");
    vector<bool> pai(n+1, false);
    for(int i = 0; i< k;i++){
        int x, y; cin >> x >> y;
        string a, b; cin >> a >> b;
        cards[x] = a;
        cards[y] = b;
        if(a == b){
            pai[x] = true;
            pai[y] = true;
        }
    }
    int total = 0;
    int ans = 0;
    int facedown = 0;
    int haves = 0;
    map<string, int> cnt;
    for(int i = 1; i <= n; i++){
        if(pai[i]){
            total++;
            continue;
        }
        if(cards[i] != "-"){
            cnt[cards[i]]++;
            if(cnt[cards[i]] == 2){
                ans++;
                total += 2;
                haves--;
            } else{
                haves++;
            }
        }else facedown++;
    }
    if(facedown == 2){
        if(total == n-2) ans++;
    }
    if(haves == facedown) ans += facedown;
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