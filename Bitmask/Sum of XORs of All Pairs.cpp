// First think about binary array (just some 0s and 1s)
// then consider the binary array at each position (Bitwise pos) like a "Vertical Array"
// In this vertical array, all 0s and 1s are from diff diff elements of the Main array 
// (in this problem, they are from the XORs)

// For AND --> contribution = cnt1^2
// For OR --> contribution = cnt1 * n + cnt0 * cnt1 
// Need not to worry about the reverse pair (already counted)

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    // For counting the number of set bits at each position
    vector<int> cnt(31, 0); 
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j <= 30; j++) {
            if((a[i] >> j) & 1) cnt[j]++;
        }

    }    
    int ans = 0;
    for(int j = 0; j <= 30; j++) {
        int contrib = 2 * (cnt[j] * (n - cnt[j]));
        ans += contrib * (1 << j);
    }
    cout << ans << '\n';

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
