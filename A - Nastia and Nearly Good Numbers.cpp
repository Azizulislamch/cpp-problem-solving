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
#define setBit(x, i) ((x) or (1LL << (i)))
#define clearBit(x, i) ((x) & (~(1LL << (i))))
#define checkBit(x, i) ((x) & (1LL << (i)))
 
 
void solve(){
    ll a, b; cin>>a>>b;
    if(b==1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl<<a<<" "<<a*b<<" "<<a*(b+1)<<endl;
}
 
int main(){
    fio();
    TC solve();
    return 0;
}