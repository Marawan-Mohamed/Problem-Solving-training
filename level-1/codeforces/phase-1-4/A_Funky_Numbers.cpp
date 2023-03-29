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
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
    ll n;
    cin >> n;
    for(int i = 1; i * (i + 1) <= n; ++i){
        ll tmp = 1 + 4 * (2 * n - i * (i + 1));
        if(tmp >= 0){
            double r1 = (-1.0 + sqrt((double)tmp)) / 2.0;
            double r2 = (-1.0 - sqrt((double)tmp)) / 2.0;
            if((r1 - (ll)r1 == 0) && (r2 - (ll)r2 == 0) && abs(abs(r1) - abs(r2)) == 1){
                cout << "YES\n";
                return;
            }
        }
        // int tmp = n - i * (i + 1) / 2;
        // double tmp2 = (sqrt(8. * tmp + 1) - 1.0) / 2.0;
        // if(tmp2 - (int)tmp2 <= 1e-8){
        //     cout << "YES\n";
        //     return;
        // }
    }
    cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
