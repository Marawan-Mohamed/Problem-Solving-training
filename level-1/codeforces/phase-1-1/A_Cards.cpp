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
const int N = 100 + 5;
int c[N];
bool v[N];
int t = 1;

void solve(){
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> c[i];
        sum += c[i];
    }
    sum = sum * 2 / n;
    for (int i = 1; i <= n; ++i)
    {
        if(!v[i]){
            v[i] = 1;
            for (int j = i + 1; j <= n; ++j)
            {
                if(!v[j] && (c[i] + c[j] == sum)){
                    v[j] = 1;
                    cout << i << " " << j << endl;
                    break;
                }
            }
        }
        
    }
    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
