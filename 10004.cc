#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x;
    vector<int> v;
    while (1) {
	cin >> x;
	if (cin.eof()) {
	    break;
	}
	v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
	cout << *it;
	if (it != v.end() -1) {
	    cout << ' ';
	}
    }
    cout << endl;
    return 0;
}
