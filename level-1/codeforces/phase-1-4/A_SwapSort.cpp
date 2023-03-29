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
#define YES             cout << "YES\n"
#define NO              cout << "NO\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> ans;
    frni(i, n) cin >> a[i];
    frni(i, n){
        int min = i;
        for(int j = i; j < n; ++j){
            if(a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            swap(a[i], a[min]);
            ans.push_back({i, min});
        }
    }
    cout << ans.size() << endl;
    frni(i, ans.size()){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
