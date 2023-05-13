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
	int n;
    cin >> n;
    vector<pair<double, double>> a(n);
    frni(i, 0, n) cin >> a[i].first >> a[i].second;
    double ans = 0;
    frni(i, 0, n){
        frni(j, i, n){
            ans = max(ans, sqrt(((a[i].first - a[j].first) * (a[i].first - a[j].first)) + ((a[i].second - a[j].second) * (a[i].second - a[j].second))));
        }
    }
    printf("%.10f\n", ans);
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
