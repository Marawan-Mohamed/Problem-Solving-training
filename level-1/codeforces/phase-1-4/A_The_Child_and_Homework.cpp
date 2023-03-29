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

bool sor(string s1, string s2){
    return s1.size() > s2.size();
}

void solve(){
    string s[4];
    frni(i, 4) cin >> s[i];
    vector<int> ans;
    frni(i, 4){
        bool mn = 1;
        frni(j, 4){
            if(i == j) continue;
            if((s[i].length() - 2) * 2 > (s[j].length() - 2)){
                mn = 0;
                break;
            }
        }
        if(mn){ ans.push_back(i); continue;}
        bool mx = 1;
        frni(j, 4){
            if(i == j) continue;
            if((s[i].length() - 2) < (s[j].length() - 2) * 2){
                mx = 0;
                break;
            }
        }
        if(mx){ ans.push_back(i); continue;}
    }
    if(ans.size() != 1) cout << "C\n";
    else cout << s[ans[0]][0] << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
