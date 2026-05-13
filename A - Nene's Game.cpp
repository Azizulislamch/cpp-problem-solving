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
    int k, q;
    cin>>k>>q;
    int a[k], b[q];
    for(int i=0; i<k; i++) cin>>a[i];
    for(int i=0; i<q; i++) cin>>b[i];
    int m=a[0];
    for(int i=0; i<q; i++){
        if(b[i]<m) cout<<b[i]<<" ";
        else cout<<m-1<<" ";
    }
    cout<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}