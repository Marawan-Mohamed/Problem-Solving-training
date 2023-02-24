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
const int N = 3000 + 5;
vector <bool> prime(N, 1);
int t = 1;
void sieve(){
    prime[0] = 0;
    prime[1] = 0;
    for (int i = 2; i < N; ++i)
    {
        if(prime[i]){
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = 0;
            }
            
        }
    }
    
}

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        set<int> s;
        for (int j = 2; j * j < i; ++j)
        {
            if(i % j == 0){
                if(prime[j]) s.insert(j);
                if(prime[i / j]) s.insert(i / j);
            }
        }
        if(s.size() == 2) ans++;
    }
    cout << ans << endl;
}

int main(){
    sieve();
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
