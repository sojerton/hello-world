#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
bool prime(const int& n) {
	bool res = (n > 1) ? true : false;
	long int i1, i2, i3, i4, i5, i6, i7, i8;
	i1 = 31; i2 = 37; i3 = 41; i4 = 43; i5 = 47; i6 = 49; i7 = 53; i8 = 59;
	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 || n == 17 || n == 19 || n == 23 || n == 29) { res = true; }
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0 || n % 13 == 0 || n % 17 == 0 || n % 19 == 0 || n % 23 == 0 || n % 29 == 0) { res = false; }
	else {
		while (i8 <= sqrt(n*1.) && n%i1 && n%i2 && n%i3 && n%i4 && n%i5 && n%i6 && n%i7 && n%i8)
		{
			i1 += 30; i2 += 30; i3 += 30; i4 += 30; i5 += 30; i6 += 30; i7 += 30; i8 += 30;
		}
		if (i8 <= sqrt(n*1.) ||
			i1 <= sqrt(n*1.) && n % i1 == 0 ||
			i2 <= sqrt(n*1.) && n % i2 == 0 ||
			i3 <= sqrt(n*1.) && n % i3 == 0 ||
			i4 <= sqrt(n*1.) && n % i4 == 0 ||
			i5 <= sqrt(n*1.) && n % i5 == 0 ||
			i6 <= sqrt(n*1.) && n % i6 == 0 ||
			i7 <= sqrt(n*1.) && n % i7 == 0)
			res = false;
		else res = true;
	}

	return res;
}
int main(void) {
	int m, n, k = 0;
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	cin >> m >> n;
	for (int i = m; i <= n; ++i)
		if (prime(i)) {
			cout << i << endl;
			++k;
		}
	if (!k) cout << "Absent";
	return 0;
}