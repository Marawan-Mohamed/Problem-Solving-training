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
    string s;
    cin >> s;
    int n = s.length();
    ll ans = -1;
    frni(i, s.length() - 2){
        if(s[0] == '0' && (i > 0)) break;
        for (int j = i + 1; j < n - 1; ++j)
        {
            if(s[i + 1] == '0' && ((j - i - 1) > 0)){
                break;
            }
            if(s[j + 1] == '0' && ((n - j - 2) > 0)){
                continue;
            }
            if((i > 7) || ((j - i - 1) > 7) || ((n - j - 2) > 7)) continue;
            ll s1 = stoll(s.substr(0, i + 1));
            ll s2 = stoll(s.substr(i + 1, j - i));
            ll s3 = stoll(s.substr(j + 1, n - j));
            if(s1 > 1000000 || s2 > 1000000 || s3 > 1000000) continue;
            ans = max(ans, s1 + s2 + s3);
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
