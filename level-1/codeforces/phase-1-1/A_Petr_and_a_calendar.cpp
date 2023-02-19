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
    int m, d;
    cin >> m >> d;
    if(m == 2){
        cout << ceil((28.0 + d - 1) / 7.0) << endl;
    }else if(m > 7){
        if(m % 2 == 0){
        cout << ceil((31.0 + d - 1) / 7.0) << endl;
        }else{
            cout << ceil((30.0 + d - 1) / 7.0) << endl;
        }
    }else{
        if(m % 2 == 1){
        cout << ceil((31.0 + d - 1) / 7.0) << endl;
        }else{
            cout << ceil((30.0 + d - 1) / 7.0) << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
