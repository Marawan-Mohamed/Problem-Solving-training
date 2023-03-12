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
const int N = 2e3 + 5;
int t = 1;
vector<bool> isPrime(N, 1);
vector<int> primes;

void sieve(){
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i = 2; i < N; ++i){
        if(isPrime[i]){
            for(int j = i * i; j < N; j += i){
                isPrime[j] = 0;
            }
            primes.push_back(i);
        }
    }
}

void solve(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    frni(i, primes.size() - 1){
        if(primes[i] + primes[i + 1] + 1 > n){
            break;
        }
        if(isPrime[primes[i] + primes[i + 1] + 1]) ans++;
    }
    if(ans >= k){
        cout << "YES\n";
    }else cout << "NO\n";
}

int main(){
    sieve();
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
