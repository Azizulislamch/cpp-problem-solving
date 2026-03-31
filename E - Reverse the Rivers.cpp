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


void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    
    vector<vector<int>> a(k + 1, vector<int>(1, 0));
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            int t;
            cin >> t;
            t = t | a[j].back();
            a[j].push_back(t);
        }
    }
    
    while (q--) {
        int m;
        cin >> m;
        
        vector<pair<int, int>> s, g;
        
        while (m--) {
            char ss;
            int r, c;
            cin >> r >> ss >> c;
            
            if (ss == '<')
                s.emplace_back(r, c);
            else
                g.emplace_back(r, c);
        }
        
        int now = 1;
 
        for (auto [r, c] : g) {
            auto it = upper_bound(a[r].begin(), a[r].end(), c);
            now = max(now, int(it - a[r].begin()));
        }
        
        if (now > n) {
            cout << -1 << "\n";
            continue;
        }
        
        bool failed = false;
        
        for (auto [r, c] : s)
            if (a[r][now] >= c)
                failed = true;
        
        cout << (failed ? -1 : now) << "\n";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int tests = 1;
    // cin >> tests;
 
    while (tests--)
        solve();
    
    return 0;
}