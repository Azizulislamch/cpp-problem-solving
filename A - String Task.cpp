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
    string s1="", s2="";
    for(char c:s){
        s1+=tolower(c);
    }
    //cout<<s1<<endl;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]!='a' && s1[i]!='e'  && s1[i]!='i' && s1[i]!='o' && s1[i]!='u' && s1[i]!='y'){
            s2+='.';
            s2+=s1[i];
        }
    }
    cout<<s2<<endl;

}

int main(){
    fio();
    solve();
    return 0;
}