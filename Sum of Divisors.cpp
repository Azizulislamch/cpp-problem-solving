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

ll triangular(ll n){
    return(n%mod)*((n+1)%mod)%mod*500000004%mod;
}

void solve(){
    ll n; cin>>n;
    ll res=0;
    ll L=1;
    while(L<=n){
        ll k=n/L;
        ll R=n/k;
        ll sumLR=(triangular(R)-triangular(L-1)+mod)%mod;
        res=(res+k%mod*sumLR)%mod;
        L=R+1;
    }
    cout<<res<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}