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
    string a;
    cin >> a;
 
    sort(a.begin(), a.end());
 
    vector<string> ans;
    ans.push_back(a);
 
    while (next_permutation(a.begin(), a.end())) {
        ans.push_back(a);
    }
 
    cout << ans.size() << endl;
 
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

}

int main(){
    fio();
    solve();
    return 0;
}