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
#define YES             cout << "YES\n"
#define NO              cout << "NO\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e3 + 5;
bool b[N];
int t = 1;

void solve(){
    int n, m;
    cin >> n >> m;
    int l = 1, r = n;
    while(m--){
        string s[4];
        frni(i, 4) cin >> s[i];
        int j;
        cin >> j;
        if(s[2][0] == 'l'){
            r = min(r, j - 1);
        }else{
            l = max(l, j + 1);
        }
    }
    if(l > r) cout << "-1\n";
    else cout << r - l + 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
