//<3 vu tran thao nhu 
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

template<typename T> bool maximize(T& a, T b) {return (a < b ? a = b, 1 : 0);}
template<typename T> bool minimize(T& a, T b) {return (a > b ? a = b, 1 : 0);}

const ll INF = ~(1LL << 63);
const int MOD = 1e9 + 7;

ll add(ll x, ll y) {x += y; if(x >= MOD) return x - MOD; return x;}
ll sub(ll x, ll y) {x -= y; x %= MOD; if(x < 0) x += MOD; return x;}
ll mul(const ll &x, const ll &y) {return(1LL * ((x % MOD) * (y % MOD) % MOD));}

void setIO(string NAME = "")
{
    if((int) NAME.length() && fopen((NAME + ".inp").c_str(), "r"))
    freopen((NAME + ".inp").c_str(), "r", stdin),
    freopen((NAME + ".out").c_str(), "w", stdout);
}

signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
