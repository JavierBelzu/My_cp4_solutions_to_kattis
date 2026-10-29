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
    vi a(5);
    for(int i = 0; i< 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4 - i; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+ 1]);
                for(int k = 0; k < 5; k++){
                    cout << a[k] << " ";
                }
                cout << endl;
            }
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