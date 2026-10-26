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
vi diag1(17);
vi diag2(17);
pii moves(int col1, int row1, int col2, int row2){
    if(col1 > 8 || col1 < 1 || row1 > 8 || row1 < 1){
        return {-1, -1};
    }
    if(col1 + row1 == col2 + row2 || row1 - col1 + 8 == row2 - col2 + 8){
        return {col1, row1};
    }
    return {-1, -1};
}
void solve() {
    char col1, col2;
    int row1, row2;
    cin >> col1 >> row1 >> col2 >> row2;
    int vcol1 = col1 - 'A' + 1;
    int vcol2 = col2 - 'A' + 1;
    //cout << col1 << " " << vcol1 << endl;
    if((vcol1 + row1) % 2 != (vcol2 + row2)%2){
        cout << "Impossible" << endl;
        return;
    }
    if(vcol1 == vcol2 && row1 == row2){
        cout << 0 << " ";
        cout << col1 << " " << row1 << endl;
        return;
    }
    
    for(int i = 0; i <=20; i++){
        if(moves(vcol1 + i, row1 + i, vcol2, row2) != mp(-1, -1)){
            if(i == 0){
                cout << 1 << " ";
                cout << col1 << " " << row1 << " " << col2 << " " << row2 << endl;
                return;
            } else{
                cout << 2 << " ";
                pii x = moves(vcol1 + i, row1 + i, vcol2, row2);
                cout << col1 << " " << row1 << " " << char(x.first -1 + 'A') << " " << x.second << " " << col2 << " " << row2 << endl;
                return;
            }
        }
        if(moves(vcol1 - i, row1 -i, vcol2, row2) != mp(-1, -1)){
            cout << 2 << " ";
            pii x = moves(vcol1 - i, row1 - i, vcol2, row2);
            cout << col1 << " " << row1 << " " << char(x.first -1 + 'A') << " " << x.second << " " << col2 << " " << row2 << endl;
            return;
        }
    }
    
    for(int i = 0; i <=20; i++){
        if(moves(vcol1 - i, row1 + i, vcol2, row2) != mp(-1, -1)){
            if(i == 0){
                cout << 1 << " ";
                cout << col1 << " " << row1 << " " << col2 << " " << row2 << endl;
                return;
            } else{
                cout << 2 << " ";
                pii x = moves(vcol1 - i, row1 + i, vcol2, row2);
                cout << col1 << " " << row1 << " " << char(x.first -1 + 'A') << " " << x.second << " " << col2 << " " << row2 << endl;
                return;
            }
        }
        if(moves(vcol1 + i, row1 -i, vcol2, row2) != mp(-1, -1)){
            cout << 2 << " ";
            pii x = moves(vcol1 + i, row1 - i, vcol2, row2);
            cout << col1 << " " << row1 << " " << char(x.first -1 + 'A') << " " << x.second << " " << col2 << " " << row2 << endl;
            return;
        }
    }


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
        
    }
    return 0;
}