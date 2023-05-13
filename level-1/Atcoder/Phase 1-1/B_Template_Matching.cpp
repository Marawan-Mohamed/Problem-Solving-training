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
#define yes             cout << "Yes\n"
#define no              cout << "No\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<string> b(m);
    frni(i, n) cin >> a[i];
    frni(i, m) cin >> b[i];
    for (int i = 0; i < n - m + 1; ++i){
        for (int j = 0; j < n - m + 1; ++j){
            bool f = 0;
            frni(x, m){
                frni(y, m){
                    if(a[i + x][j + y] != b[x][y]){
                        f = 0;
                        break;
                    }
                    f = 1;
                }
                if(!f) break;
            }
            if(f){
                yes;
                return;
            }
        }
    }
    no;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
