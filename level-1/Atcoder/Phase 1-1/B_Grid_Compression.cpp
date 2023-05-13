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
    vector<string> a(h);
    vector<string> ans(h);
    frni(i, 0, h){
        cin >> a[i];
        ans[i] = a[i];
    }
    frni(i, 0, h){
        int tmp = 0;
        frni(j, 0, w){
            if(a[i][j] == '.') tmp++;
        }
        if(tmp == w){
            frni(j, 0, w){
                ans[i][j] = '0';
            }
        }
    }
    frni(i, 0, w){
        int tmp = 0;
        frni(j, 0, h){
            if(a[j][i] == '.') tmp++;
        }
        if(tmp == h){
            frni(j, 0, h){
                ans[j][i] = '0';
            }
        }
    }
    frni(i, 0, h){
        string tmp = "";
        frni(j, 0, w){
            if(ans[i][j] != '0') tmp += ans[i][j];
        }
        if(tmp.length() != 0) cout << tmp << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
