#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define frni(i, _n_) for (int i = 0, _n = _n_; i < _n; ++i)
#define SHORT_MAX ((short)0x7FFF)
#define SHORt_MIN ((short)0x8000)
#define USHORT_MAX ((unsigned short)0xFFFF)
#define LL_MAX ((long long)0x7FFFFFFFFFFFFFFF)
#define LL_MIN ((long long)0x8000000000000000)
#define ULL_MAX ((unsigned long long)0xFFFFFFFFFFFFFFFF)
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve()
{
    int n, m;
    cin >> n >> m;
    frni(i, n)
    {
        int s, f, t;
        cin >> s >> f >> t;
        if (s == f)
        {
            cout << t << endl;
            continue;
        }
        else if(f > s){
            int k = s - 1;
            while(t > k){
                k += 2 * (m - 1);
            }
            cout << k + (f - s) << endl;
        }else{
            int k = (m - 1) - (s - m);
            while(t > k){
                k += 2 * (m - 1);
            }
            cout << k + (s - f) << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while (t--)
        solve();
}
