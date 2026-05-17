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
    string a;
    cin>>a;

    int hour=stoi(a.substr(0,2));
    int minute=stoi(a.substr(3,2));

    string period=(hour<12) ? "AM":"PM";

    if(hour==0){
        hour=12;
    }else if(hour>12){
        hour-=12;
    }
    cout<<(hour<10 ? "0":"")<<hour<<":"<<(minute<10 ? "0":"")<<minute<<" "<<period<<endl;
}

int main(){
    fio();
    TC solve();
    return 0;
}