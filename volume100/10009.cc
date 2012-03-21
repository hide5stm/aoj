#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double r;
    cin >> r;
    printf("%.6lf %.6lf\n", M_PI * r * r, 2 * M_PI * r);
    return 0;
}
