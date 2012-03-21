#include <iostream>
#include <string>

using namespace std;

int main() {
    while (1) {
	string s;
	cin >> s;
	if (cin.eof()) {
	    break;
	}
	string::reverse_iterator it;
	for (it = s.rbegin(); it != s.rend(); ++it) {
	    cout << *it;
	}
	cout << endl;
    }
    return 0;
}
