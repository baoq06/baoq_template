//thao nhu my beloved <3
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

template<class X, class Y> bool maximize(X &a, const Y& b) {X eps = 1e-9; return (b > a + eps) ? a = b, 1 : 0;}
template<class X, class Y> bool minimize(X &a, const Y& b) {X eps = 1e-9; return (b + eps < a) ? a = b, 1 : 0;}

const ll INF = ~(1LL << 63);
const int MOD = 1e9 + 7;

void setIO(string NAME = "")
{
    if((int) NAME.length() && fopen((NAME + ".inp").c_str(), "r"))
    freopen((NAME + ".inp").c_str(), "r", stdin),
    freopen((NAME + ".out").c_str(), "w", stdout);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}
