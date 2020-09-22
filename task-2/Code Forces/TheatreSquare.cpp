#include <iostream>
using namespace std;
int main() {
	int m, n, a;
	cin >> m >> n >> a;
	int s, b;
	s = (m + a - 1) / a;
	b = (n + a - 1) / a;
	cout << s*b << endl;
}