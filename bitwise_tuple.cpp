#include <iostream>
using namespace std;

#define ll long long
#define MOD 1000000007

ll expo(ll x, ll y) {
    ll res = 1;
    while (y > 0) {
        if (y % 2) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}
int bitTuple(int n, int m) {
    int ans = expo(2, n) - 1;
    return expo(ans, m);
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << bitTuple(n, m) << endl;
    }
    return 0;
}
