#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
	int x, y, z;
	string r;
	cin >> x >> y >> z;
	x *= x;
	y *= y;
	z *= z;
	if (x == y + z || y == x + z || z == x + y) {
	    r = "YES";
	} else {
	    r = "NO";
	}
	cout << r << endl;
    }
    return 0;
}
