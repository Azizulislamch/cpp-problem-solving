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
    int y, w;
    cin>>y>>w;
    int a=6;
    int b=(6-max(y,w))+1;
    
    if(b==2 || b==4){
        a=a/2;
        b=b/2;
    }
    else if(b==3){
        a=a/3;
        b=b/3;
    }
    else if(b==6){
        a=a/6;
        b=b/6;
    }
    cout<<b<<"/"<<a<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}