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
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    int l1;
    if(x1 == 0){
        l1 = n - y1;
    }else if(x1 == n){
        l1 = n + n + y1;
    }else if(y1 == 0){
        l1 = n + x1;
    }else{
        l1 = 4 * n - x1;
    }
    int l2;
    if(x2 == 0){
        l2 = n - y2;
    }else if(x2 == n){
        l2 = n + n + y2;
    }else if(y2 == 0){
        l2 = n + x2;
    }else{
        l2 = 4 * n - x2;
    }
    int ans = abs(l1 - l2);

    cout << ((ans <= 2 * n)?ans:(4 * n - ans)) << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
