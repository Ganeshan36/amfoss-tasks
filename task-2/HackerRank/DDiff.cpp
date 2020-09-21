#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int n, a[100][100], d1, d2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	for (int i = 0; i < n; i++) {
		d1 = d1 + a[i][i];
		d2 = d2 + a[i][n - 1 - i];
	}
	cout << abs(d1 - d2) << endl;
}