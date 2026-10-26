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
    int n;
    while(cin >> n){
        vector<bool> b(n, false);
        vi a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i > 0){
                if(abs(a[i] - a[i-1]) < n){
                    b[abs(a[i] - a[i-1])] = true;
                }
            }
        }
        bool pos = true;
        for(int i = 1; i < n; i++){
            if(b[i] == false){
                pos = false;
                break;
            }
        }
        if(pos){
            cout << "Jolly" << endl;
        } else{
            cout << "Not Jolly" << endl;
        }
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