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
    int y;
    cin>>y;
    while(true){
        y++;
        int year=y;
        int a=y%10;
        y=y/10;
        int b=y%10;
        y=y/10;
        int c=y%10;
        y=y/10;
        int d=y%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<year<<endl;
            break;
        }
        y=year;
    }
}

int main(){
    fio();
    solve();
    return 0;
}