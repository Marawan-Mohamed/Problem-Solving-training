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
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
vector<char> ans;
int t = 1;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f = 0;
    int i = 0;
    while (i < n)
    {
        if(s[i] == 'o' && s[i + 1] == 'g' && s[i + 2] == 'o'){
            i += 3;
            ans.push_back('*');
            ans.push_back('*');
            ans.push_back('*');
            while (i < n - 1 && s[i] == 'g' && s[i + 1] == 'o')
            {
                i += 2;
            }
            continue;
        }else{
            ans.push_back(s[i]);
            ++i;
        }

    }
    frni(i, ans.size()) cout << ans[i];
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
