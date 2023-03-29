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
    string s, s1, s2;
    cin >> s >> s1 >> s2;
    string srev;
    frni(i, s.length()) srev += s[_n - i - 1];
    int tmp1 = s.find(s1);
    int tmp2 = s.find(s2, tmp1 + s1.length());
    int tmpr1 = srev.find(s1);
    int tmpr2 = srev.find(s2, tmpr1 + s1.length());
    if(tmp1 != string::npos && tmp2 != string::npos){
        if(tmpr1 != string::npos && tmpr2 != string::npos){
            cout << "both\n";
        }else{
            cout << "forward\n";
        }
    }else if(tmpr1 != string::npos && tmpr2 != string::npos){
        cout << "backward\n";
    }else{
        cout << "fantasy\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
