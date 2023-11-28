#include <iostream>
#include <vector>
using namespace std;
int main() {
	bool v[42];
	for (int i = 0; i < 42; i++) {
		v[i] = false;
	}
	for (int i = 0; i < 10; i++) {
		int a;
		cin >> a;
		v[a % 42] = true;
	}
	int count = 0;
	for (int i = 0; i < 42; i++) {
		if (v[i] == true)
			count++;
	}
	cout << count;
	return 0;
}
