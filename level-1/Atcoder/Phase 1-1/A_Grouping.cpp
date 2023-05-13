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
#define yes             cout << "Yes\n"
#define no              cout << "No\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
    vector<int> g1 = {1, 3, 5, 7, 8, 10, 12};
    vector<int> g2 = {4, 6, 9, 11};
    int x, y;
    cin >> x >> y;
    if((search_n(g1.begin(), g1.end(), 1, x) != g1.end() && search_n(g1.begin(), g1.end(), 1, y) != g1.end()) || (search_n(g2.begin(), g2.end(), 1, x) != g2.end() && search_n(g2.begin(), g2.end(), 1, y) != g2.end())) yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
