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
int work[N][2];
int t = 1;

void solve(){
    int n, p[3], t1, t2;
    cin >> n >> p[0] >> p[1] >> p[2] >> t1 >> t2;
    frni(i, n) cin >> work[i][0] >> work[i][1];
    int ans = p[0] * (work[0][1] - work[0][0]);
    for (int i = 1; i < n; ++i)
    {
        if(work[i][0] - work[i - 1][1] > 0){
            if(work[i][0] - work[i - 1][1] <= t1){
                ans += p[0] * (work[i][0] - work[i - 1][1]);
            }else if(work[i][0] - work[i - 1][1] - t1 <= t2){
                ans += p[0] * t1;
                ans += p[1] * (work[i][0] - work[i - 1][1] - t1);
            }else{
                ans += p[0] * t1;
                ans += p[1] * t2;
                ans += p[2] * (work[i][0] - work[i - 1][1] - t1 - t2);
            }
        }
        ans += p[0] * (work[i][1] - work[i][0]);
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
