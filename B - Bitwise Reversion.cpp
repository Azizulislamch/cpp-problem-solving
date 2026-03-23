#include<bits/stdc++.h>
using namespace std;
#define fio() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define TC int tc; cin>>tc; for(int testcase=1; testcase<=tc; testcase++)
#define endl "\n"
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define pi acos(-1)
#define MAX 300005
#define INF 1e9
#define MOD 998244353
#define BITSCOUNT 32
#define debug(x) cerr << x << endl;
#define setBit(x, i) x | (1LL << i);
#define clearBit(x, i) x & (~(1LL << i));
#define checkBit(x, i) x & (1LL << i);
 
 
void solve(){
    ll x,y,z; cin>>x>>y>>z;
    bool ok=true;
    for(int b=0; b<31; b++){
        int cnt=((x>>b)&1)+((y>>b)&1)+((z>>b)&1);
        if(cnt==2){
            ok=false;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}