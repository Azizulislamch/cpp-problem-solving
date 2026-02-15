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
    int n, q; cin>>n>>q;
 
    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    long long p[n+1];
    p[0]=0;
    for(int i=1; i<=n; i++){
        p[i]=p[i-1]+a[i-1];
    }

    while(q--){
        int l, r;
        cin>>l>>r;
        l--; r--;
        cout<<p[r+1]-p[l]<<endl;
    }
}

int main(){
    fio();
    solve();
    return 0;
}