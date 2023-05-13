## Taymyr is calling you ( Round 395 A )
Problem Link:
https://codeforces.com/problemset/problem/764/A

```cpp
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
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int n, m, z, ans = 0;
    cin >> n >> m >> z;
    int tmp = lcm(n, m);
    cout << z / tmp << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
```

## Soft Drinking ( Round 107 A )
Problem Link:
https://codeforces.com/problemset/problem/151/A

```cpp
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
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min((k * l) / nl, min(c * d, p / np)) / n << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
```

## Rewards ( Round 107 A )
Problem Link:
https://codeforces.com/problemset/problem/448/A

```cpp
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
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int a = 0, b = 0, n;
    for (int i = 0; i < 3; ++i){
        int tmp;
        cin >> tmp;
        a += tmp;
    }
    a = ceil(a / 5.0);
    for (int i = 0; i < 3; ++i){
        int tmp;
        cin >> tmp;
        b += tmp;
    }
    b = ceil(b / 10.0);
    cin >> n;
    if((a + b) > n) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
```

