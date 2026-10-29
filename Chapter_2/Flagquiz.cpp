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
    string grb; getline(cin, grb);
    int n; cin>> n;
    //cout << n << endl;
    vector<vector<string>> an(n);
    //map<pair<string, int>, int> cnt;
    getline(cin, grb);
    for(int i = 0; i < n; i++){
        string s; getline(cin, s);
        stringstream ss(s);
        string token;
        //int k = 0;
        while(getline(ss, token, ',')){

            token.erase(remove_if(token.begin(), token.begin() + 1,
                                  [](unsigned char c) { return isspace(c); }),
                        token.begin() + 1);
            an[i].pb(token);
            //cnt[mp(token, k)]++;
            //k++;
        }
    }
    vector<pii> cost(n);
    for(int i = 0; i <n;i++){
        int c = -1;
        for(int j = 0;j < n; j++){
            int cnt = 0;
            if(j == i) continue;
            for(int k = 0; k < an[i].size(); k++){
                if(an[i][k] != an[j][k]) cnt++;
            }
            c = max(c, cnt);
        }
        cost[i].first = c;
        cost[i].second = i;
    }
    
    sort(all(cost));
    //for(auto x: cost) cout << x.first << endl;
    //cout << cost.size() << endl;
    int mn = cost[0].first;

    int i = 0;

    while(i < n && cost[i].first == mn){
        //cout << i << " " << an[cost[i].second].size() << endl;
        for(int j = 0; j < an[cost[i].second].size(); j++){
            cout << an[cost[i].second][j];
            (j == an[cost[i].second].size() - 1)? cout << endl: cout << ", ";
        }
        
        i++;
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