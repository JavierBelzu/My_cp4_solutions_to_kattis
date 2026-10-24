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
    vector<vector<int>> cards(5, vector<int>(14, 0));
    string s; cin >> s;
    for(int i = 0; i < s.size(); i+=3){
        int number = (10 * (s[i+1] - '0') + (s[i+2] - '0'));
        if(s[i] == 'P'){
            cards[1][number]++;
            if(cards[1][number] > 1){
                cout << "GRESKA" << endl;
                return;
            }
        } else if(s[i] == 'K'){
            cards[2][number]++;
            if(cards[2][number] > 1){
                cout << "GRESKA" << endl;
                return;
            }
        } else if(s[i] == 'H'){
            cards[3][number]++;
            if(cards[3][number] > 1){
                cout << "GRESKA" << endl;
                return;
            }
        } else{
            cards[4][number]++;
            if(cards[4][number] > 1){
                cout << "GRESKA" << endl;
                return;
            }
        }
    }
    for(int i = 1; i <= 4; i++){
        int total = 13;
        for(int j = 1; j <= 13; j++){
            total -= cards[i][j];
        }
        cout << total << " ";
    }
    cout << endl;
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