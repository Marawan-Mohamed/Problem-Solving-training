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
    int n;
    cin >> n;
    int a[2] = {0};
    frni(i, n){
        int tmp;
        cin >>tmp;
        if(tmp == 0) a[0]++;
        else a[1]++;
    }
    if(a[0] == 0){
        cout << "-1\n";
        return;
    }
    int tmp = a[1] / 9;
    frni(i, tmp) {
        frni(j, 9) cout << '5';
    }
    if(tmp == 0){
        cout << "0";
    }else{
        frni(i, a[0]) cout << "0";
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
