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
 
    ll a[n], s=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }
    ll min_diff=s;

    for(int i=0; i<(1<<n); i++){
        ll sum=0;
        for(int j=0; j<n; j++){
            if(i&(1<<j)){
                sum+=a[j];
            }
        }
        ll diff=abs(s-2*sum);
        min_diff=min(min_diff,diff);
    }

    cout<<min_diff<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}