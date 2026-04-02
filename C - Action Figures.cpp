#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned long long
#define pb push_back
#define pi acos(-1)
#define MAX 1000005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) ((x) | (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))
const int mod=1e9+7;


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    vector<int> a, b;
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            a.push_back(i);
        } else {
            b.push_back(i);
        }
    }
    
    reverse(b.begin(), b.end());
 
    long long ans = n * (n + 1LL) / 2;
    int x = a.size() - 1;
    int y = b.size() - 1;
 
    for (int i = n - 1; i >= 0; --i) {
        while (x >= 0 && a[x] >= i) {
            --x;
        }
        while (y >= 0 && b[y] >= i) {
            --y;
        }
        if (s[i] == '1') {
            if (x >= 0) {
                ans -= (i + 1);
                --x;
            } else if (y >= 0) {
                ans -= (i + 1);
                --y;
            }
        }
    }
 
    cout << ans << endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}