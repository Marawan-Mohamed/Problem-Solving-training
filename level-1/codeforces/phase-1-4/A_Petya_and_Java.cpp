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

int comp(int af[], int bf[]){
    for(int i = N - 1; i >= 0; --i){
        if((af[i] > bf[i]) || (af[i] < bf[i])){
            return af[i] - bf[i];
        }
    }
    return 0;
}

void solve(){
    string s;
    cin >> s;
    if(s.length() > 19){
            cout << "BigInteger\n" << endl;
            return;
    }else if(s.length() == 19){
        if(s.compare(to_string(LL_MAX)) > 0){
            cout << "BigInteger\n" << endl;
            return;
        }
    }
    ll tmp = stoll(s);
    if(tmp <= (ll)127){
        cout << "byte\n";
    }else if(tmp <= (ll)SHORT_MAX){
        cout << "short\n";
    }else if(tmp <= (ll)INT_MAX){
        cout << "int\n";
    }else if(tmp <= (ll)LL_MAX){
        cout << "long\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
