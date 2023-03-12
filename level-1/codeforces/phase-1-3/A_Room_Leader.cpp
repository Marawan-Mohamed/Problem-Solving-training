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
const int N = 50 + 5;
pair<string, int> ai[N];
int t = 1;
bool sor(pair<string, int> a, pair<string, int> b){
    return (a.second > b.second);
}

void solve(){
    int n;
    cin >> n;
    frni(i, n){
        cin >> ai[i].first;
        int plus, minus, a, b, c, d, e;
        cin >> plus >> minus >> a >> b >> c >> d >> e;
        ai[i].second = (plus * 100) - (minus * 50) + a + b + c + d + e;
    }
    sort(ai, ai + n, sor);
    cout << ai[0].first << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
