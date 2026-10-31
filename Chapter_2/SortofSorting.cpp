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

bool xo(const string &a, const string &b) {
    if (a[0] == b[0]) {
        return a[1] < b[1];
    }
    return a[0] < b[0];
}

void solve() {
    int n;
    while(true){
        cin >> n;
        if(n == 0) return;
        vector<string> a(n);
        for(int i = 0; i< n; i++){
            cin >> a[i];
        }
        stable_sort(all(a), xo);
        for(int i = 0; i < n; i++){
            cout << a[i] << endl;
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