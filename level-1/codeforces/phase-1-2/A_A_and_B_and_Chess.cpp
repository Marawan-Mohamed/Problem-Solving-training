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
    string s[8];
    frni(i, 8) cin >> s[i];
    int b = 0, w = 0;
    frni(i, 8){
        frni(j, s[i].length()){
            switch (s[i][j])
            {
            case 'q':
                b += 9;
                break;
            case 'r':
                b += 5;
                break;
            case 'b':
                b += 3;
                break;
            case 'n':
                b += 3;
                break;
            case 'p':
                b += 1;
                break;
            case 'Q':
                w += 9;
                break;
            case 'R':
                w += 5;
                break;
            case 'B':
                w += 3;
                break;
            case 'N':
                w += 3;
                break;
            case 'P':
                w += 1;
                break;
            
            default:
                break;
            }
        }
    }
    if(b == w) cout << "Draw\n";
    else if(b > w) cout << "Black\n";
    else cout << "White\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
