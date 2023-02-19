#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
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
    int ans = 0, pos = 0;
    cin >> s;
    for (int i = 0, n = s.length(); i < n; ++i)
    {
        if(abs((s[i] - 'a') - pos) <= 13){
            ans += abs((s[i] - 'a') - pos);
        }else if(abs((s[i] - 'a') - pos) > 13){
            ans += 26 - abs((s[i] - 'a') - pos) ;
        }
        pos = (s[i] - 'a');
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}