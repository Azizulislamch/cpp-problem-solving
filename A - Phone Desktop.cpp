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
    int x, y;
    cin>>x>>y;
    int s2=(y+1)/2;
    int a=min(y, s2*2);
    y-=a;
    int r=s2*15-a*4;
    x-=min(x, r);
 
    int s1=(x+14)/15;
 
    int ans=s1+s2;
 
    cout<<ans<<endl;

}

int main(){
    fio();
    TC solve();
    return 0;
}