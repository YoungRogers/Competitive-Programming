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
		int h, p;
		cin >> h >> p;

		while (p > 0 && h > 0) {
			h -= p;
			p /= 2;
		}

		if (h > 0) {
			cout << "0\n";
		} else {
			cout << "1\n";
		}
	}
}
