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
int fre[1005];
int t = 1;

void solve(){
    int n;
    cin >> n;
    int a[n];
    frni(i, n){
        cin >> a[i];
        fre[a[i]]++;
    }
    fre[a[0]]--;
    int ans = 0;
    for(int i = 1000; i > 0; --i){
        if(i < a[0]) break;
        if(fre[i]){
            frni(j, fre[i]){
                a[0]++;
                fre[i - 1]++;
                fre[i]--;
                ans++;
                if(a[0] > i) break;
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
