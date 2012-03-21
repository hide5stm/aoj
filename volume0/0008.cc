#include <iostream>

using namespace std;

int calc(int n) {
    int cnt = 0;
    for (int i = 0; i <= 9; ++i) {
	for (int j = 0; j <= 9; ++j) {
	    for (int k = 0; k <= 9; ++k) {
		int x = n - (i + j + k);
		if ( 0 <= x && x <= 9) {
		    cnt++;
		}
	    }
	}
    }
    return cnt;
}

int main() {
    while (1) {
	int n;
	cin >> n;
	if (cin.eof()) {
	    break;
	}
	cout << calc(n) << endl;
    }
    return 0;
}
