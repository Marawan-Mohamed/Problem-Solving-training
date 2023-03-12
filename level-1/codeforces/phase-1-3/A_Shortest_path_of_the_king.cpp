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
int t = 1;

void solve(){
    string s, d;
    cin >> s >> d;
    vector<int> moves;
    while (s.compare(d) != 0)
    {
        if(s[0] > d[0] && s[1] > d[1]){
            s[0]--;
            s[1]--;
            moves.push_back(5);
        }else if(s[0] > d[0] && s[1] < d[1]){
            s[0]--;
            s[1]++;
            moves.push_back(4);
        }else if(s[0] < d[0] && s[1] < d[1]){
            s[0]++;
            s[1]++;
            moves.push_back(6);
        }else if(s[0] < d[0] && s[1] > d[1]){
            s[0]++;
            s[1]--;
            moves.push_back(7);
        }else if(s[0] > d[0] && s[1] == d[1]){
            s[0]--;
            moves.push_back(2);
        }else if(s[0] < d[0] && s[1] == d[1]){
            s[0]++;
            moves.push_back(3);
        }else if(s[0] == d[0] && s[1] > d[1]){
            s[1]--;
            moves.push_back(1);
        }else{
            s[1]++;
            moves.push_back(0);
        }
    }
    cout << moves.size() << endl;
    frni(i, moves.size()){
        switch(moves[i]){
            case 0:
                cout << "U\n";
                break;
            case 1:
                cout << "D\n";
                break;
            case 2:
                cout << "L\n";
                break;
            case 3:
                cout << "R\n";
                break;
            case 4:
                cout << "LU\n";
                break;
            case 5:
                cout << "LD\n";
                break;
            case 6:
                cout << "RU\n";
                break;
            case 7:
                cout << "RD\n";
                break;
            default:
                break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // cin >> t;
    while(t--) solve();
}
