#include <iostream>
#include <algorithm>

using namespace std;

bool prost(int n) {

	if (n == 1)
		return false;

	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int main(){

	int n;
	cin >> n;

	if (prost(n))
		cout << "DA" << endl;
	else
		cout << "NE" << endl;

	return 0;
}