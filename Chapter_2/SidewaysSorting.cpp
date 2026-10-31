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
    int r, c;
    while(true){
        cin >> r >> c;
        if(r == 0 && c == 0) return;
        vector<vector<pii>> a(c, vector<pii>(r));
        vector<char> orig(c * r + 3);
        int cnt= 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> orig[cnt];
                a[j][i].first = tolower(orig[cnt]);
                a[j][i].second = cnt;
                cnt++;
            }
            
        }
        stable_sort(all(a), [](const vector<pii>& x, const vector<pii>& y) {
            for (int i = 0; i < (int)x.size(); i++) {
                if (x[i].first != y[i].first) {
                    return x[i].first < y[i].first;
                }
            }
            return false;
        });
        for(int i = 0; i< r; i++){
            for(int j = 0; j < c; j++){
                cout << orig[a[j][i].second];
            }
            cout << endl;
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