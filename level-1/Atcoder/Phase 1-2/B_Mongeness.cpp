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
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
	int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    frni(i, 0, h) frni(j, 0, w) cin >> a[i][j];
    frni(i1, 0, h){
        frni(i2, i1 + 1, h){
            frni(j1, 0, w){
                frni(j2, j1 + 1, w){
                    if(!(a[i1][j1] + a[i2][j2] <= a[i2][j1] + a[i1][j2])){
                        no;
                        return;
                    }
                }
            }
        }
    }
    yes;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
