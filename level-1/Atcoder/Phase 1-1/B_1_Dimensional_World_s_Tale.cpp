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
#define yes             cout << "Yes\n"
#define no              cout << "No\n"
#define all(v)          (v).begin(), (v).end()
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
	int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> a(n);
    frni(i, 0, n) cin >> a[i];
    vector<int> b(m);
    frni(i, 0, m) cin >> b[i];
    sort(all(a));
    sort(all(b));
    int z = b[0];
    if(a[n - 1] >= b[0]){
        cout << "War\n";
        return;
    }
    if(z > x && z <= y){
        cout << "No War\n";
        return;
    }
    cout << "War\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
