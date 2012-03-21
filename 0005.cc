#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a, int b) {
    int c = 1;
    while (1) {
	if (0 == a % b) {
	    return b;
	}
	c = a % b;
	a = b;
	b = c;
    }
    return 1;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    while (1) {
	int a, b;
	cin >> a >> b;
	if (cin.eof()) {
	    break;
	}
	if (a < b) {
	    int c;
	    c = b;
	    b = a;
	    a = c;
	}
	printf("%d %d\n", gcd(a, b), lcm(a, b));
    }
    return 0;
}
