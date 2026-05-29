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
    string st, s1="", s2="";
    cin>>st;
    s1+=st[0];
    
    int j=0;
    for(int i=1; i<st.size(); i++){
        if(st[i]=='0'){
            s1+=st[i];
        }else{
            j=i;
            break;
        }
    }
    for( ; j<st.size(); j++){
        s2+=st[j];
    }
    ll a, b;
    a=stoi(s1);
    b=stoi(s2);
    if(a<b) cout<<a<<" "<<b<<endl;
    else cout<<-1<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}