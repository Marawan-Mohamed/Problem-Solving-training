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
int fre[8];
int t = 1;

void solve(){
    int n;
    cin >> n;
    frni(i, n){
        int tmp;
        cin >> tmp;
        fre[tmp]++;
    }
    if(fre[1] != n / 3 || fre[5] || fre[7] || fre[2] + fre[3] != n / 3 || fre[4] + fre[6] != n / 3 || fre[3] > fre[6]){
        cout << "-1\n";
        return;
    }
    frni(i, n / 3){
        cout << "1 ";
        if(fre[3]){
            cout << "3 6\n";
            fre[3]--;
            fre[6]--;
        }else{
            cout << "2 ";
            if(fre[6]){
                cout << "6\n";
                fre[6]--;
            }else{
                cout << "4\n";
                fre[4]--;
            }
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}