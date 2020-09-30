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
		int pc, pr;
		cin >> pc >> pr;

		int z = pc / 9;
		int y = pr / 9;

		if (pc % 9 != 0) {
			z++;
		}

		if (pr % 9 != 0) {
			y++;
		}

		if (z < y) {
			cout << "0 ";
			cout << z << '\n';
		} else {
			cout << "1 ";
			cout << y << '\n';
		}

	}

}
