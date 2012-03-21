#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int x;
    vector<int> v;
    while (!cin.eof()) {
	cin >> x;
	v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int>::iterator it = v.begin();
    for (;it != v.end(); ++it) {
	cout << *it << ' ';
    }
    cout << endl;
    return 0;
}
