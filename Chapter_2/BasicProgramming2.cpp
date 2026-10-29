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
    int n, t; cin >> n >> t;
    vi a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(all(a));
    if(t == 1){
        for(int i = 0; i< n; i++){
            if(binary_search(all(a), 7777 - a[i])){
                cout << "Yes" << endl;
                return;
            }
        }
        cout << "No" << endl;
    } else if(t == 2){
        for(int i =1; i< n; i++){
            if(a[i] == a[i-1]){
                cout << "Contains duplicate" << endl;
                return;
            }
        }
        cout << "Unique" << endl;
    } else if(t == 3){
        int cnt = 1;
        for(int i = 1; i < n; i++){
            if(a[i] != a[i-1]){
                if(cnt > n/2){
                    cout << a[i-1] << endl;
                    return;

                }
                cnt = 1;
            } else cnt++;
        }
        cout << -1 << endl;
    } else if(t == 4){
        if(n%2 == 1){
            cout << a[n/2] << endl;
        } else{
            cout << a[n/2 -1] << " " << a[n/2] << endl;
        }
    } else{
        for(int i = 0; i < n; i++){
            if(a[i] >= 100 && a[i] < 1000) cout << a[i] << " ";
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