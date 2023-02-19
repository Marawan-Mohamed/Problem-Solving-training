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
int arr[4];
int t = 1;

void solve(){
    string s; bool flag = 1;
    cin >> s;
    frni(i, s.length()){
        if(s[i] != '+') arr[s[i] - '0']++;
    }
    for (int i = 1; i <= 3; ++i)
    {
        if(arr[i] != 0){
            if(flag){cout << i; arr[i]--; flag = 0;}
            frni(j, arr[i]) cout << '+' << i;
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
