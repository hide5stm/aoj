#include <iostream>

using namespace std;

int main() {
    int x;
    for (int i = 1; ;  i++) {
	if (cin.eof()) {
	    break;
	}
	cin >> x;
	cout << "Case " << i << ": " << x << endl;
    }
    return 0;
}
