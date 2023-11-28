#include<iostream>
using namespace std;
int main() {
	int num[42];
	int n, ans = 0;
	memset(num, 0, sizeof(num));
	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		int temp = n % 42;
		num[temp]++;
		ans++;
		if (num[temp] > 1)
		{
			ans--;
		}
	}
	cout << ans;
	return 0;
}