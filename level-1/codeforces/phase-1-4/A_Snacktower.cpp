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

void solve(){
    int n;
    cin >> n;
    vector <int> a(n);
    frni(i, n) cin >> a[i];
    priority_queue<int> q;
    for (int i = 0, j = n; i < n; ++i)
    {
        if(a[i] == j){
            cout << a[i] << " ";
            --j;
            while (!q.empty() && q.top() == j)
            {
                cout << q.top() << " ";
                q.pop();
                --j;
            }
            cout << endl;
        }else{
            cout << endl;
            q.push(a[i]);
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
