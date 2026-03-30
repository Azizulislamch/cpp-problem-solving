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


ll PrimeCount(ll prime){
    ll a1=prime/2;
    ll a2=prime/3;
    ll a3=prime/ 5;
    ll a4=prime/7;
    ll a5=prime/6;
    ll a6=prime/10;
    ll a7=prime/14;
    ll a8=prime/15;
    ll a9=prime/21;
    ll a10=prime/35;
    ll a11=prime/30;
    ll a12=prime/42;
    ll a13=prime/70;
    ll a14=prime/105;
    ll a15=prime/210;
    return prime-(a1+a2+a3+a4)+(a5+a6+a7+a8+a9+a10)-(a11+a12+a13+a14)+a15;
}
 
void solve(){
    ll l, r; cin>>l>>r;
    cout<<PrimeCount(r)-PrimeCount(l-1)<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}