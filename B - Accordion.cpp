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
    string s; cin>>s;
    int n=s.size();
 
    int b1=s.find('[');
    if(b1==string::npos){
        cout<<-1<<endl;
        return;
    }
 
    int c1=s.find(':', b1);
    if(c1==string::npos){
        cout<<-1<<endl;
        return;
    }
 
    int b2=s.rfind(']');
    if(b2==string::npos){
        cout<<-1<<endl;
        return;
    }
 
    int c2=s.rfind(':', b2);
    if(c2==string::npos || c2<=c1){
        cout<<-1<<endl;
        return;
    }
 
    int cnt=0;
    for(int i=c1+1; i<c2; i++){
        if(s[i]=='|'){
            cnt++;
        }
    }
 
    int ans=4+cnt;
    cout<<ans<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}