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
bool c[1000];
int t = 1;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ones =0, zeros = 0;
    frni(i, n){
        if(s[i] == '1'){
            zeros = 0;
            ones++;
            if(ones > 1){
                cout << "No\n";
                return;
            }
        }else{
            ones = 0;
            zeros++;
            if(zeros > 2){
                cout << "No\n";
                return;
            }
        }
    }
    if(s[0] == '0'){
        s[0] = '1';
        ones =0; zeros = 0;
        bool ef = 0;
        frni(i, n){
            if(s[i] == '1'){
                zeros = 0;
                ones++;
                if(ones > 1){
                    ef = 1;
                    break;
                }
            }else{
                ones = 0;
                zeros++;
                if(zeros > 2){
                    ef = 1;
                    break;
                }
            }
        }
        if(ef == 0){
            cout << "No\n";
            return;
        }
        s[0] = '0';
    }
    if(s[n - 1] == '0'){
        s[n - 1] = '1';
        ones =0; zeros = 0;
        bool ef = 0;
        frni(i, n){
            if(s[i] == '1'){
                zeros = 0;
                ones++;
                if(ones > 1){
                    ef = 1;
                    break;
                }
            }else{
                ones = 0;
                zeros++;
                if(zeros > 2){
                    ef = 1;
                    break;
                }
            }
        }
        if(ef == 0){
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
