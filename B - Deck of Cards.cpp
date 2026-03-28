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
    int n, k; cin>>n>>k;
    string s; cin>>s;
 
    int cnt0=0, cnt2=0;
    for(char ch:s){
        if(ch=='0') cnt0++;
        else if (ch=='2') cnt2++;
    }
 
    int x=cnt0;
    int y=cnt0+cnt2;
    int p=n-k;
 
    string ans;
    ans.resize(n);
    for(int i=1; i<=n; i++){
        int l=i-p;
        int r=i-1;
 
        bool ok=max(l, x)<=min(r, y);
        if(!ok){
            ans[i-1]='-';
        }else if(i>y && i<=p+x){
            ans[i-1]='+';
        }else{
            ans[i-1]='?';
        }
    }
    cout<<ans<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}