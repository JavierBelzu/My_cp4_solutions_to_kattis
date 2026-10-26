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
    vi b(n);
    vector<int> arr(1e6 + 2, 0);
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(arr[b[i]]){
            arr[b[i]]--;
            arr[b[i] - 1]++;
        } else{
            ans++;
            arr[b[i] -1]++;
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