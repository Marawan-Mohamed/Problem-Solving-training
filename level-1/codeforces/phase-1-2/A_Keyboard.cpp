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
string qwer = "qwertyuiopasdfghjkl;zxcvbnm,./";
void solve(){
    char d;
    cin >> d;
    string s;
    cin >> s;
    frni(i, s.length()){
        frni(j, qwer.length()){
            if(qwer[j] == s[i]){
                s[i] = (d == 'R')? qwer[j - 1]: qwer[j + 1];
                break;
            }
        }
    }
    cout << s << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
