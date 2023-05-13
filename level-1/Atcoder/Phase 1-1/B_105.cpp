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
vector <int> ans;
void pre(){
    for (int i = 1; i < 205; i += 2){
        set<int> tmp;
        for (int j = 1; j * j <= i; ++j)
        {
            if(i % j == 0){
                tmp.insert(j);
                tmp.insert(i / j);
            }
        }
        if(tmp.size() == 8){
            ans.push_back(i);
        }
    }
}

void solve(){
	int n;
    cin >> n;
    int i = 0;
    while (i < ans.size() && ans[i] <= n)
    {
        ++i;
    }
    cout << i << endl;
}

int main(){
    pre();
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
