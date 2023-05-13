#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define frni(i, a, n)    for(int i = a; i < n; ++i)
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
	int k;
    string a, b;
    cin >> k >> a >> b;
    ll a10 = 0, b10 = 0;
    frni(i, 0, a.length()){
        a10 += (a[i] - '0') * pow(k, a.length() - i - 1);
    }
    frni(i, 0, b.length()){
        b10 += (b[i] - '0') * pow(k, b.length() - i - 1);
    }
    cout << a10 * b10 << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
