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

bool chuc(vector<string> &board, int i, int j){
    if(i >= 5 || i < 0 || j > 4 || j < 0){
        return true;
    }
    return board[i][j] != 'k';
}
void solve() {
    vector<string> bo(5);
    for(int i = 0; i<5; i++){
        cin >> bo[i];
    }
    bool ans = true;
    int cnt = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(bo[i][j] == 'k'){
                cnt ++;
                ans = chuc(bo, i + 2, j + 1);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
                ans = chuc(bo, i + 1, j + 2);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
                ans = chuc(bo, i -1, j + 2);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
                ans = chuc(bo, i -2, j + 1);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
                ans = chuc(bo, i -2, j -1);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
                ans = chuc(bo, i -1, j - 2);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
                ans = chuc(bo, i +1, j - 2);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
                ans = chuc(bo, i + 2, j -1);
                if(ans == false){
                    cout << "invalid" << endl;
                    return;
                }
            }
        }
    }
    if(cnt != 9){
        cout << "invalid" << endl;
        return;
    }
    cout << "valid" << endl;

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