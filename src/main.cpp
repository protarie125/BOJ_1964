#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 5 };
	for (int i = 2; i <= n; ++i) {
		ans += i * 5;
		ans -= 2 * i - 1;
		ans %= 45678;
	}

	cout << ans;

	return 0;
}