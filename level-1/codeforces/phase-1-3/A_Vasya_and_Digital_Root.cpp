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
const int N = 1e3 + 5;
int ans[N];
int t = 1;

void solve(){
    int k, d;
    cin >> k >> d;
    if(k > 1 && d == 0){
        cout << "No solution\n";
        return;
    }
    int tmp = 0;
    int pos = k - 1;
    while (tmp != d)
    {
        ans[pos]++;
        tmp++;
        pos--;
        if(pos < 0) pos = k - 1;
    }
    for(int i = k - 1; i >= 0; --i) cout << ans[i];
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
