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
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int ans = 0;
    frni(i, n){
        cin >> a[i];
        b[i] = 1 - a[i];
    }
    int l = 0, r = 0;
    frni(i, n){
        for(int j = n - 1; j >= i; --j){
            int tmp = 0;
            frni(k, i) tmp += a[k];
            for(int k = i; k <= j; ++k) tmp += b[k];
            for(int k = j + 1; k < n; ++k) tmp += a[k];
            ans = max(ans, tmp);
        }
    }
    cout << ans << endl;
    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
