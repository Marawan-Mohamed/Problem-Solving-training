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
    int x, y;
    cin >> x >> y;
    while(x >= 0 && y >= 0){
        int tmp = 0;
        while(tmp < 220 && x >= 0 && y >= 0){
            if(x > 0 && tmp  / 100 < 2){
                tmp += 100;
                x--;
            }else if(y > 0 && tmp < 220){
                tmp += 10;
                y--;
            }else{
                break;
            }
        }
        if(tmp != 220){
            cout << "Hanako\n";
            return;
        }
        tmp = 0;
        while(tmp < 220 && x >= 0 && y >= 0){
            if(y >= 22 && tmp < 220){
                tmp += 220;
                y -= 22;
            }else if(y >= 12 && tmp < 220){
                tmp += 120;
                y -= 12;
            }else if(y >= 2 && tmp % 100 < 20){
                tmp += 20;
                y -= 2;
            }
            else if(x > 0 && tmp  / 100 < 2){
                tmp += 100;
                x--;
            }else{
                break;
            }
        }
        if(tmp != 220){
            cout << "Ciel\n";
            return;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
