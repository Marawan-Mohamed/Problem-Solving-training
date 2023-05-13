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
#define yes             cout << "YES\n"
#define no              cout << "NO\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
	int h, w;
    cin >> h >> w;
    vector<string> s(h);
    frni(i, h) cin >> s[i];
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            int tmp = 0;
            if(s[i][j] == '.'){
                if(i - 1 >= 0 && s[i - 1][j] == '#') tmp++;
                if(i + 1 < h && s[i + 1][j] == '#') tmp++;
                if(j - 1 >= 0 && s[i][j - 1] == '#') tmp++;
                if(j + 1 < w && s[i][j + 1] == '#') tmp++;

                if(i - 1 >= 0 && j - 1 >= 0 && s[i - 1][j - 1] == '#') tmp++;
                if(i + 1 < h && j - 1 >= 0 && s[i + 1][j - 1] == '#') tmp++;
                if(i - 1 >= 0 && j + 1 < w && s[i - 1][j + 1] == '#') tmp++;
                if(i + 1 < h && j + 1 < w && s[i + 1][j + 1] == '#') tmp++;
                s[i][j] = tmp + '0';
            }
        }
    }
    frni(i, h) cout << s[i] << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
