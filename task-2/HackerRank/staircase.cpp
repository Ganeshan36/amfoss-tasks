#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
	int hash = 0, spaces = 0;
	for (int i = 0; i < n; i++ ) {
		spaces = n - (i + 1);
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		hash = i + 1;
		for (int k = 0; k < hash; k++) {
			cout << "#";
		}
		cout << endl;
	}

}

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	staircase(n);

	return 0;
}
