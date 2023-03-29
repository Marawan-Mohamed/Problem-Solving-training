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
#define YES cout << "YES\n"
#define NO cout << "NO\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve()
{
    int n;
    cin >> n;
    string ss;
    cin >> ss;
    int s = -1, t = n;
    frni(i, n)
    {
        if (s == -1 && ss[i] == 'R')
        {
            s = i;
            break;
        }
        else if (t == n && ss[i] == 'L')
        {
            t = i;
            break;
        }
    }
    if (s != -1)
    {
        int tmp = s;
        while (ss[tmp] == 'R')
            ++tmp;
        if (ss[tmp] != '.')
            t = tmp - 1;
        else
            t = tmp;
    }
    else
    {
        int tmp = t;
        t--;
        while (ss[tmp] == 'L')
            ++tmp;
        s = tmp - 1;
    }
    cout << s + 1 << " " << t + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while (t--)
        solve();
}
