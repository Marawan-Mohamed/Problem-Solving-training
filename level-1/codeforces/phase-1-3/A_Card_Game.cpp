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

int chars[256];

void solve(){
    chars['6'] = 1;
    chars['7'] = 2;
    chars['8'] = 3;
    chars['9'] = 4;
    chars['T'] = 5;
    chars['J'] = 6;
    chars['Q'] = 7;
    chars['K'] = 8;
    chars['A'] = 9;
    char trump;
    cin >> trump;
    string s1, s2;
    cin >> s1 >> s2;
    if(trump == s1[1] && trump != s2[1]){
        cout << "YES\n";
        return;
    }
    if(s2[1] == s1[1]){
        if((chars[s1[0]] > chars[s2[0]])){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }else{
        cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
