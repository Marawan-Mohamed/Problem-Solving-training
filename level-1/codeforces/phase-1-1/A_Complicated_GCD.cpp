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
const int N = 100 + 5;
int a[N];
int b[N];
int t = 1;

int comp(int af[], int bf[]){
    for(int i = N - 1; i >= 0; --i){
        if((af[i] > bf[i]) || (af[i] < bf[i])){
            return af[i] - bf[i];
        }
    }
    return 0;
}

int len(int arr[]){
    for (int i = N - 1; i >= 0; --i)
    {
        if(arr[i] != 0){
            return i + 1;
        }
    }
    return 0;
}

void sub(int af[], int bf[], int res[]){
    int tmpRes[N] = {0};
    int l = len(af);
    for (int i = 0; i < l; ++i)
    {
        tmpRes[i] = af[i] - bf[i]; 
    }
    frni(i, l){
        while (tmpRes[i] < 0)
        {
            tmpRes[i] += 10;
            tmpRes[i + 1] -= 1;

        }
    }
    frni(i, N){
        res[i] = tmpRes[i];
    }
}

void solve(){
    string sa, sb;
    cin >> sa >> sb;
    // for (int i = sa.length() - 1, j = 0; i >= 0; --i, ++j)
    // {
    //     a[j] = sa[i] - '0';
    // }
    // for (int i = sb.length() - 1, j = 0; i >= 0; --i, ++j)
    // {
    //     b[j] = sb[i] - '0';
    // }
    // int c = comp(a, b);
    // while (c != 0)
    // {
    //     if(c > 0){
    //         sub(a, b, a);
    //     }else{
    //         sub(b, a, b);
    //     }
    //     c = comp(a, b);
    // }
    // for (int i = len(a) - 1; i >= 0; --i)
    // {
    //     cout << a[i];
    // }
    if(sa.compare(sb) == 0){
        cout << sa;
    }else{
        cout << 1;
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
