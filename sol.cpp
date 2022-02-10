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
		string s;
		cin >> s;
		if (n > 2) { // if n is greater than 2, then there will always be a palindrome
			cout << "NO" << '\n';
			continue;
		} else if (n == 1) { // if n is equal to 1, then the answer is automatically YES
			cout << "YES" << '\n';
			continue;
		}
		// otherwise, we need to check if the first and second (last) character are not equal
		cout << (s[0] != s[1] ? "YES" : "NO") << '\n';
	}
	return 0;
}
