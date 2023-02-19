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
const int N = 100 + 5;
int sol[N];
int t = 1;

void solve(){
    int n;
    cin >> n;
    int mn = 100, mx = 0;
    frni(i, n) {
        cin >> sol[i];
        mx = max(mx, sol[i]);
        mn = min(mn, sol[i]);
    }
    int ans = 0;
    if(sol[0] != mx)
        for (int i = 1; i < n; ++i)
        {
            if(sol[i] == mx){
                while(i != 0){
                    swap(sol[i], sol[i - 1]);
                    i--;
                    ans++;
                }
                break;
            }
        }
    if(sol[n - 1] != mn){
        for (int i = n - 2; i >= 0; --i)
        {
            if(sol[i] == mn){
                while(i != n - 1){
                    swap(sol[i], sol[i + 1]);
                    i++;
                    ans++;
                }
                break;
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
