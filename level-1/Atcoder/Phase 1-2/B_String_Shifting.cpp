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
#define yes             cout << "YES\n"
#define no              cout << "NO\n"
const long long MOD = 1e9 + 7, MOD2 = 998244353;
const int N = 2e5 + 5;
int t = 1;

void solve(){
	string s;
    cin >> s;
    int n = s.length();
    if(n < 2){
        cout << s << endl << s << endl;
        return;
    }
    vector<string> tmpv;
    string tmp = s;
    do {
        tmp = tmp.substr(1, n - 1) + tmp[0];
        tmpv.push_back(tmp);
    }while (s.compare(tmp) != 0);

    sort(tmpv.begin(), tmpv.end());
    
    cout << tmpv[0] << endl << *tmpv.rbegin() << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
