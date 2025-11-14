#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power(int x, ll n, ll mod) { // O(log n)
    if(n == 0) return 1 % mod;
    ll cur = power(x, n/2, mod);
    if(n % 2 == 0) return cur * cur % mod;
    else return cur * cur % mod * x % mod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << power(1e8 + 9, 1e18, 1e9 + 7);
    return 0;
}
