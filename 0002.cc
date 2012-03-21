#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>

using namespace std;

void mk_vec(vector<int> &v, string &s) {
    string::reverse_iterator it;
    for (it = s.rbegin(); it != s.rend(); ++it) {
	v.push_back(int(*it) - int('0'));
    }
}

int main() {
    while (1) {
	string x, y;
	cin >> x >> y;
	if (cin.eof()) {
	    break;
	}
	vector<int> v1, v2;
	if (x.length() > y.length()) {
	    mk_vec(v1, x);
	    mk_vec(v2, y);
	} else {
	    mk_vec(v2, x);
	    mk_vec(v1, y);
	}
	int up = 0;
	for (int i = 0; i < v1.size(); ++i) {
	    int current;
	    if (v2.size() > i) {
		current = v1[i] + v2[i] + up;
	    } else {
		current = v1[i] + up;
	    }
	    if (current >= 10) {
		up = 1;
	    } else {
		up = 0;
	    }
	    //cout << current;
	}
	//cout << endl;
	cout << v1.size() + up << endl;
    }
    return 0;
}
