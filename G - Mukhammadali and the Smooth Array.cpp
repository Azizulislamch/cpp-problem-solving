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
 
 
void solve(){
    int n; cin>>n;
    vector<ll> a(n), c(n);
    for(auto& x:a) cin>>x;
    ll cost=0;
    for(int i=0; i<n; i++){
        cin>>c[i];
        cost+=c[i];
    }
 
    vector<ll> dp(n, 0);
    ll mx=0;
    for(int i=0;i<n; i++){
        dp[i]=c[i];
        for(int j=0; j<i; j++){
            if(a[j]<=a[i]) dp[i]=max(dp[i], dp[j]+c[i]);
        }
        mx=max(mx, dp[i]);
    }
    cout<<cost-mx<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}
