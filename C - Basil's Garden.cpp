#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define pi acos(-1)
#define MAX 1000005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) x | (1LL << i);
#define clearBit(x, i) x & (~(1LL << i));
#define checkBit(x, i) x & (1LL << i);
 
 
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(auto& x:a) cin>>x;
    int ans=0;
    for(int i=0; i<n; i++){
        ans=max(ans, a[i]+i);
    }
    cout<<ans<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}
