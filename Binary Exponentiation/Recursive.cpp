#include<bits/stdc++.h>
using namespace std;
#define ll long long

int power(int x, ll n, int mod) { // O(log n)
    if(n == 0) return 1 % mod;
    ll cur = power(x, n/2, mod);
    if(n % 2 == 0) {
        return 1LL * cur * cur % mod;
    }
    else {
        return 1LL * cur * cur % mod * x % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << power(1e8 + 9, 1e18, 1e9 + 7);
    return 0;
}
