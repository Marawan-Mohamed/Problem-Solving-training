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
const int N = 2e3 + 5;
int x[N];
int y[N];
const int NF = 2e6 + 5;
bool freq[NF];
int t = 1;

void solve(){
    int n;
    cin >> n;
    frni(i, n) {
        cin >> x[i];
        freq[x[i]] = 1;
    }
    frni(i, n) {
        cin >> y[i];
        freq[y[i]] = 1;
    }
    int ans = 0;
    frni(i, n){
        frni(j, n){
            if(freq[(x[i] ^ y[j])]){
                ans++;
            }
        }
    }
    cout << ((ans % 2 == 0)?"Karen\n":"Koyomi\n");
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
