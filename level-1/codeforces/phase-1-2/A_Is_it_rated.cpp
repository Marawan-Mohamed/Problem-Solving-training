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
const int N = 2e3 + 5;
pair<int, int> p[N];
int t = 1;

void solve(){
    int n;
    cin >> n;
    bool rated = 0;
    frni(i, n){
        cin >> p[i].first >> p[i].second;
        if(p[i].first != p[i].second) rated = 1;
    }
    if(rated){
        cout << "rated\n";
        return;
    }
    for (int i = 1; i < n; ++i)
    {
        if(p[i].first > p[i - 1].first){
            cout << "unrated\n";
            return;
        }
    }
    cout << "maybe\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
