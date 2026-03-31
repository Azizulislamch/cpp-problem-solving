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


ll cook(ll k, ll a, ll b, ll x, ll y){
    ll ans=0;
    if (k>=a){
        ll p=(k-a)/x+1;
        ans+=p;
        k-=p*x;
    }
    if(k>=b){
        ll q=(k-b)/y+1;
        ans+=q;
        k-=q*y;
    }
    return ans;
}

void solve(){
    ll k, a, b, x, y;
        cin>>k>>a>>b>>x>>y;
        
        ll ans1=cook(k, a, b, x, y);
        ll ans2=cook(k, b, a, y, x);
        
        cout<<max(ans1, ans2)<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}