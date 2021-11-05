/*
#include <iostream>

using namespace std;

int main()
{
	int amount, count = 0, i = 2, diff;
	bool flag = true;
	cout << "Enter the amount of prime numbers you would like to have: ";
	cin >> amount;

	while (amount > count) {
		for (diff = 2; diff < i; diff++) {
			if (i % diff == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << i;
			count++;
			if (count != amount) {
				cout << ", ";
			}
		}
		i++;
		flag = true;
	}
	return 0;
}
*/