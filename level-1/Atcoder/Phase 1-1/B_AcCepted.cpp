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
#define yes             cout << "AC\n"
#define no              cout << "WA\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
	string s;
    cin >> s;
    if(s[0] != 'A'){
        no;
        return;
    }
    int uc = 0;
    frni(i, 0, s.length()){
        if(isupper(s[i])) uc++;
    }
    if(uc != 2){
        no;
        return;
    }
    frni(i, 2, s.length() - 1){
        if(s[i] == 'C'){
            yes;
            return;
        }
    }
    no;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
