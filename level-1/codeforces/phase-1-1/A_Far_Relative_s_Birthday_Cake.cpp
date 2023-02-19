#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define SHORT_MAX       ((short)0x7FFF)
#define SHORt_MIN       ((short)0x8000)
#define USHORT_MAX      ((unsigned short)0xFFFF)
#define LL_MAX          ((long long)0x7FFFFFFFFFFFFFFF)
#define LL_MIN          ((long long)0x8000000000000000)
#define ULL_MAX         ((unsigned long long)0xFFFFFFFFFFFFFFFF)
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 100 + 5;
int t = 1;
string cake[N];

void solve(){
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> cake[i];
    }
    for (int i = 0; i < n; ++i)
    {
        int c = 0;
        for (int j = 0; j < n; ++j)
        {
            if(cake[i][j] == 'C') c++;
        }
        ans += c * (c - 1);
    }
    for (int i = 0; i < n; ++i)
    {
        int c = 0;
        for (int j = 0; j < n; ++j)
        {
            if(cake[j][i] == 'C') c++;
        }
        ans += c * (c - 1);
    }
    cout << ans / 2 << endl;
    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
