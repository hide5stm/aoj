#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <cstdio>

using namespace std;

int main() {
    while (1) {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if (cin.eof()) {
	    break;
	}
	double x, y;
	y = (double(d) * double(c) - double(a) * double(f))
	    / (double(d) * double(b) - double(a) * double(e));
	x = (double(c) - double(b) * y) / double(a);
	printf("%.3lf %.3lf\n", x, y);
    }
    return 0;
}
