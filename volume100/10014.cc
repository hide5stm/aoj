#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int h, w;
    bool first = true;
    while (1) {
	cin >> h >> w;
	if (0 == h && 0 == w) {
	    cout << endl;
	    break;
	}
	if (first) {
	    first = false;
	} else {
	    cout << endl;
	}
	for (int i = 0; i < h; i++) {
	    for (int j = 0; j < w; j++) {
		if (1 == (i + j) % 2) {
		    cout << '.';
		} else {
		    cout << '#';
		}
	    }
	    cout << endl;
	}
    }
    return 0;
}
