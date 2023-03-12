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
    int x, y;
    cin >> x >> y;
    pair<int, int> a;
    a.first = abs(x) + abs(y);
    a.second = 0;
    if(x < 0) a.first *= -1;
    pair<int, int> b;
    b.first = 0;
    b.second = abs(x) + abs(y);
    if(y < 0) b.second *= -1;
    if(a.first < b.first)
        cout << a.first << " " << a.second << " " << b.first << " " << b.second << endl;
    else
        cout << b.first << " " << b.second << " " << a.first << " " << a.second << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
