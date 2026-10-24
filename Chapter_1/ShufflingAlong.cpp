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
    string s; cin >> s;
    map<int, int> in, out;
    if(n%2 == 0){
        int cnt = 1;
        for(int i = 1; i <= n/2; i++){
            in[n/2 + i] = cnt;
            out[i] = cnt++;
            in[i] = cnt;
            out[n/2 + i] = cnt++;
        }
    } else{
        in[n] = n;
        int cnt = 1;
        for(int i = 1; i <= n/2; i++){
            in[n/2 + i] = cnt++;
            in[i] = cnt++;
        }
        cnt = 1;
        for(int i = 1; i <= n/2 + 1; i++){
            out[i] = cnt++;
            out[n/2 + i + 1] = cnt++;
        }
    }
    /* for(int i = 1; i <= n; i++){
        cout << i << " " << in[i] << endl;
    }
    return; */
    if(s[0] == 'i'){
        int ans = 0;
        for(int i = 1; i<= n; i++){
            int cnt = 1;
            int m = in[i];
            //cout << m << " ";
            while(m!=i){
                cnt++;
                m = in[m];
                //cout << m << " ";
            }
            //cout << endl;
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    } else{
        int ans = 0;
        for(int i = 1; i<= n; i++){
            int cnt = 1;
            int m = out[i];
            //cout << m << " ";
            while(m!=i){
                cnt++;
                m = out[m];
                //cout << m << " ";
            }
            //cout << endl;
            ans = max(ans, cnt);
        }
        cout << ans << endl;
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