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

vector<vi> xd(vector<vi> &a){
    vector<vi> ans;
    for(int i = 0; i < 4; i++){
        vi num;
        for(int j = 0; j < 4; j++){
            if(a[i][j] != 0) num.pb(a[i][j]);
        }
        int cnt = 0;
        for(int j = 0; j < num.size(); j++){
            if(j != num.size() - 1 && num[j] == num[j+1]){
                ans[i].pb(2 * num[j]);
                j++;
                cnt++;
            } else{
                ans[i].pb(num[j]);
                cnt++;
            }
        }

        while(cnt < 4){
            ans[i].pb(0);
        }
    }
    return ans;
}

vector<vi> rotl(vector<vi> &a){
    vector<vi> ans(4, vi(4));
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            
        }
    }
}
void solve() {
    vector<vi> a(4, vi(4, 0));
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }

    int dir; cin >> dir;
    if(dir == 0){
        vector<vi> ans = xd(a);

    } else if(dir == 1){

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