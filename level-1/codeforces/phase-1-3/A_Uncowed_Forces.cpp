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
    double m[5];
    double w[5];
    double x[] = {500, 1000, 1500, 2000, 2500};
    frni(i, 5) cin >> m[i];
    frni(i, 5) cin >> w[i];
    int h1, h2;
    cin >> h1 >> h2;
    double ans = 0;
    frni(i, 5){
        ans += max(0.3 * x[i], (1.0 - (m[i] / 250.0)) * x[i] - (50.0 * w[i]));
    }
    ans += h1 * 100;
    ans -= h2 * 50;
    cout << (int)ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
