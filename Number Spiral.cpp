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
    ll r, c; cin>>r>>c;
    if(r>c){
        ll ans=(r-1)*(r-1);
        ll add=0;
        if(r%2) add=c;
        else add=2*r-c;
        cout<<ans+add<<endl;
    }
    else{
        ll ans=(c-1)*(c-1);
        ll add=0;
        if(c%2) add=2*c-r;
        else add=r;
        cout<<ans+add<<endl;
    }
}


int main(){
    fio();
    TC solve();
    return 0;
}