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
    int al, ar, bl, br;
    cin >> al >> ar >> bl >> br;
    // if(al == br || ar == bl){
    //     cout << "YES\n";
    // }else if(bl - ar < 3 && ar - bl < 2){
    //     cout << "YES\n";
    // }else if(br - al < 3 && al - br < 2){
    //     cout << "YES\n";
    // }else{
    //     cout << "NO\n";
    // }
    if((al - 1 <= br && br <= (al + 1) * 2) || (ar - 1 <= bl && bl <= (ar + 1)* 2)){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
