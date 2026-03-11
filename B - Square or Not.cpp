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


bool bm(string s, int n, int r){
    int idx=0;
    for(int j=0; j< r; j++){
        if(s[idx++]!='1') return false;
    }
 
    for(int i=1; i<r-1; i++){
        if(s[idx++]!='1') return false;
        for(int j=1; j<r-1; j++){
            if(s[idx++]!='0') return false;
        }
        if(s[idx++]!='1') return false;
    }
    
    for(int j=0; j<r; j++){
        if(s[idx++]!='1') return false;
    }
    
    return true;
}

void solve(){
    int n;
    string s;
    cin>>n>>s;
    
    int r=sqrt(n);
    if(r*r==n){
        if(bm(s, n, r)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }else{
        cout<<"No"<<endl;
    }
}
 
int main(){
    fio();
    TC solve();
    return 0;
}