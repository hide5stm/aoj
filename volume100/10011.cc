#include <iostream>
#include <cstdio>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    int n, a;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
	cin >> a;
	v.push_back(a);
    }
    vector<int>::reverse_iterator it;
    for (it = v.rbegin(); it != v.rend(); ++it) {
	cout << *it;
	if (it == v.rend() - 1) {
	    cout << endl;
	    break;
	} else {
	    cout << ' ';
	}
    }
    return 0;
}
