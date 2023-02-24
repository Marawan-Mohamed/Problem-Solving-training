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
const int N = 1000 + 5;
bool c[N];
int a[55];
int t = 1;

void solve(){
    int n;
    cin >> n;
    frni(i, n){
        cin >> a[i];
    }
    stack<int> s;
    for (int i = n - 1; i >= 0; --i)
    {
        if(!c[a[i]]){
            s.push(a[i]);
            c[a[i]] = 1;
        }
    }
    cout << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << ' ';
        s.pop();
    }
    
    
    cout << endl;
    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
