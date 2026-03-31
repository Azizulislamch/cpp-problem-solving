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


bool is1100(const string& s, int p){
    return p>=0 && p+3<s.size() && s.substr(p, 4)=="1100";
}
 
int main(){
    int t; cin>>t;
    while(t--){
        string s;
        cin>>s;
        int q;
        cin>>q;
        set<int>pos;
        
        for(int i=0; i+3<s.size(); ++i){
            if(is1100(s, i)){
                pos.insert(i);
            }
        }
 
        while(q--){
            int i, v; cin>>i>>v;
            --i;
            if((s[i]-'0')==v){
                cout<<(pos.empty()?"NO":"YES")<<endl;
                continue;
            }
 
            for(int j=i-3; j<=i; ++j){
                if(is1100(s, j)){
                    pos.erase(j);
                }
            }
            s[i]=v+'0';
            for(int j=i-3; j<=i; ++j){
                if(is1100(s, j)){
                    pos.insert(j);
                }
            }
            cout<<(pos.empty()?"NO":"YES")<<endl;
        }
    }
 
    return 0;
}