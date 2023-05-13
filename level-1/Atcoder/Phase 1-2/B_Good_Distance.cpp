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
	int n, d;
    cin >> n >> d;
    vector<vector<int>> x(n, vector<int>(d, 0));
    frni(i, 0, n){
        frni(j, 0, d){
            cin >> x[i][j];
        }
    }
    int ans = 0;

    frni(i, 1, n){
        for(int j = i - 1; j >= 0; --j){
            float tmp = 0;
            frni(k, 0, d){
                tmp += pow(abs(x[i][k] - x[j][k]), 2);
            }
            tmp = sqrt(tmp);
            if(tmp - (int)tmp <= 1e-6) ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
