#include <iostream>
using namespace std;
int main() {
    int alice = 0 , bob = 0, i, a[3], b[3], r[2];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    for (int j = 0; j < 3; j++) {
        if (a[j] > b[j]) {
            alice++;
        }
        else if (a[j] < b[j])
            bob++;
    }
    cout << alice << " " << bob << endl;
}
