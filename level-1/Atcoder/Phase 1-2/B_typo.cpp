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
	string s, t;
    cin >> s >> t;
    vector<int> tmp;
    frni(i, 0, s.length()){
        if(s[i] != t[i]) tmp.push_back(i);
    }
    if(tmp.empty()){
        yes;
        return;
    }
    if(tmp.size() != 2){
        no;
        return;
    }
    if(tmp[0] + 1 == tmp[1] && s[tmp[0]] == t[tmp[1]] && s[tmp[1]] == t[tmp[0]]) yes;
    else no;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
