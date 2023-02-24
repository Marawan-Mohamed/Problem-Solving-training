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
int stnd[2];
int t = 1;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    frni(i, s.length()){
        if(s[i] == 'x') stnd[0]++;
        else stnd[1]++;
    }
    int ans = 0;
    if(stnd[1] - stnd[0] < 0){
        for(int i = 0, l = s.length(); i < l && stnd[1] < n / 2; ++i){
            if(s[i] == 'x'){
                s[i] = 'X';
                stnd[1]++;
                stnd[0]--;
                ans++;
            }
        }
    }else{
        for(int i = 0, l = s.length(); i < l && stnd[0] < n / 2; ++i){
            if(s[i] == 'X'){
                s[i] = 'x';
                stnd[1]--;
                stnd[0]++;
                ans++;
            }
        }
    }
    cout << ans << endl << s << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
