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

bool pile[N];
int t = 1;

void solve(){
    int a[2][2][N];
    int n;
    cin >> n;
    frni(i, n){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        a[0][0][i] = tmp1 / 10;
        a[0][1][i] = tmp1 % 10;
        a[1][0][i] = tmp2 / 10;
        a[1][1][i] = tmp2 % 10;
        string tmp;
        cin >> tmp;
    }
    int ans = n;
    frni(i, n){
        for(int j = i; j >= 0; --j){
            if(i == j) continue;
            if((a[0][0][i] == a[0][0][j] && a[0][1][i] == a[0][1][j] && a[1][0][i] == a[1][0][j] && a[1][1][i] == a[1][1][j]) ||
            (a[1][0][i] == a[0][0][j] && a[0][0][i] == a[0][1][j] && a[1][1][i] == a[1][0][j] && a[0][1][i] == a[1][1][j]) ||
            (a[1][1][i] == a[0][0][j] && a[1][0][i] == a[0][1][j] && a[0][1][i] == a[1][0][j] && a[0][0][i] == a[1][1][j]) ||
            (a[0][1][i] == a[0][0][j] && a[1][1][i] == a[0][1][j] && a[0][0][i] == a[1][0][j] && a[1][0][i] == a[1][1][j])){
                ans--;
                break;
            }
        }
    }
    // frni(i, n) ans += pile[i];
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
