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
#define yes             cout << "YES\n"
#define no              cout << "NO\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int n;
    cin >> n;
    int z = 0;
    vector <int> a(n);
    frni(i, n){
        cin >> a[i];
        if(a[i] == 0) z++;
    }
    if(z == n){
        no;
        return;
    }
    yes;
    vector<pair<int, int>> ans;
    frni(i, n){
        int j = i + 1;
        int sum = a[i];
        while (j < n && (sum == 0 || a[j] == 0))
        {
            sum += a[j];
            j++;
        }
        ans.push_back({i + 1, j});
        i = j - 1;
    }
    cout << ans.size() << endl;
    frni(i, ans.size()) cout << ans[i].first << " " << ans[i].second << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
