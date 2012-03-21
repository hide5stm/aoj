#include <iostream>

using namespace std;

int calc(int yen, int n) {
    for (int i = 0; i < n; ++i) {
	yen *= 1.05;
	if (yen % 1000) {
	    yen = yen - yen % 1000 + 1000;
	}
    }
    return yen;
}

int main() {
    while (1) {
	int n;
	cin >> n;
	if (cin.eof()) {
	    break;
	}
	cout << calc(100000, n) << endl;
    }
    return 0;
}
