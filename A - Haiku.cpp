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


bool isV(char ch){
    return(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
} 

void solve(){
    string s1, s2, s3; 
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    
    int a=0, b=0, c=0;
    for(char ch:s1) a+=isV(ch);
    for(char ch:s2) b+=isV(ch);
    for(char ch:s3) c+=isV(ch);
    
    if(a==5 && b==7 && c==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    fio();
    solve();
    return 0;
}