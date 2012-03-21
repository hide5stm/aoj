#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int x, y, rval;
    char op;
    while (1) {
	cin >> x >> op >> y;
	if ('?' == op) {
	    break;
	}
	switch (op) {
	case '/': rval = x / y; break;
	case '+': rval = x + y; break;
	case '-': rval = x - y; break;
	case '*': rval = x * y; break;
	}
	printf("%d\n", rval);
    }
    return 0;
}
