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
const int N = 1000 + 5;
int cards[N];
int t = 1;

void solve(){
    int n;
    cin >> n;
    frni(i, n) cin >> cards[i];
    int s = 0, d = 0;
    int p1 = 0, p2 = n - 1, i = 0;
    while (p2 >= p1)
    {
        if(i % 2 == 0){
            if(cards[p2] > cards[p1]){
                s += cards[p2];
                p2--;
            }else{
                s += cards[p1];
                p1++;
            }
        }else{
            if(cards[p2] > cards[p1]){
                d += cards[p2];
                p2--;
            }else{
                d += cards[p1];
                p1++;
            }
        }
        i++;
    }
    cout << s << " " << d << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
