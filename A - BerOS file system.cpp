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
    string s, t; cin>>s;
    t+=s[0];
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1] && s[i]=='/') continue;
        else t+=s[i];
    }
    for(int i=0; i<t.size(); i++){
        if((i==t.size()-1) && (t[i]=='/') && (t.size()>1)) continue;
        else cout<<t[i];
    }
    cout<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}