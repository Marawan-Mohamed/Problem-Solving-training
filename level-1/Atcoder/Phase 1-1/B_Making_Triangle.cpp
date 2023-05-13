#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define frni(i, _n_)    for(int i = 0, _n = _n_; i < _n; ++i)
#define SHORT_MAX       ((short)0x7FFF)
#define SHORt_MIN       ((short)0x8000)
#define USHORT_MAX      ((unsigned short)0xFFFF)
#define LL_MAX          ((long long)0x7FFFFFFFFFFFFFFF)
#define LL_MIN          ((long long)0x8000000000000000)
#define ULL_MAX         ((unsigned long long)0xFFFFFFFFFFFFFFFF)
#define yes             cout << "YES\n"
#define no              cout << "NO\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int n;
    cin >> n;
    vector<int> l(n);
    frni(i, n) cin >> l[i];
    int ans = 0;
    frni(i, n){
        for(int j = i + 1; j < n; ++j){
            if(l[i] == l[j]) continue;
            for(int k = j + 1; k < n; ++k){
                if(l[k] == l[i] || l[k] == l[j]) continue;
                vector<int> tmp(3);
                tmp[0] = l[i];
                tmp[1] = l[j];
                tmp[2] = l[k];
                sort(tmp.begin(), tmp.end());
                if(tmp[0] + tmp[1] > tmp[2]) ans++;
            }
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
