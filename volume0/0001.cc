#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 0; i < 10; ++i) {
	int h;
	cin >> h;
	v.push_back(h);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < 3; ++i) {
	cout << v[i] << endl;
    }
    
    return 0;
}
