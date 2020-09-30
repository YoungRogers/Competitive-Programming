#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		ll int n, k;
		cin >> n >> k;

		ll int p[n + 1];

		p[0] = 0;

		for (ll int i = 1; i <= n; i++) {
			cin >> p[i];
		}

		sort(p, p + n + 1);


		// for (ll int i = 0; i <= n; i++) {
		// 	cout << p[i] << " ";
		// }



		ll int min_ops = 9999999;

		ll int index = 999999;

		for (ll int i = 1; i <= n; i++) {
			// ll int z = k / 2;
			ll int c = 99999999;

			if (p[i] <= k / 2) {
				ll int z = p[i];
				ll int cnt = 0;
				ll int c = 99999999;

				while (z < k) {
					z += p[i];
					cnt++;
					// cout << "cnt is: " << cnt << endl;
					if (z == k) {
						cnt++;
						c = cnt;
						break;
					}
				}

				// cout << "c is:" << c << " for p[i] = " << p[i] << endl;

				if (c < min_ops) {
					min_ops = c;
					index = p[i];
				}
			}

		}

		// cout << "min_ops: " << min_ops;

		if (index == 999999) {
			cout << "-1\n";
		} else {
			cout << index << '\n';
		}

	}



}



