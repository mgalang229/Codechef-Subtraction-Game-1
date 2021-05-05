#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// store the first element in the 'res' variable
		int res = a[0];
		for (int i = 1; i < n; i++) {
			// store the GCD (Greatest Common Divisor) of 'res' itself
			// and the current element in the 'res' variable
			res = __gcd(res, a[i]);
		}
		cout << res << '\n';
	}
	return 0;
}
