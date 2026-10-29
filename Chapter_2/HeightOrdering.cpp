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

int insertionSort(vector<int>& arr) {
    int n = arr.size();
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            cnt ++;
        }
        arr[j + 1] = key;
    }
    return cnt;
}
void solve() {
    int s; cin >> s;
    vi a(20);
    for(auto &x: a) cin >> x;
    cout << s << " " << insertionSort(a) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    int i = 1;
    while (T--) {
        //cout << i <<  " ";
        solve();
        
    }
    return 0;
}