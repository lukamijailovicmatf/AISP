#include <iostream>
#include <algorithm>

using namespace std;

// funkcija koja proverava da li je broj prost
bool prost(int n) {

	if (n == 1)
		return false;

	for (int i = 2; i < n; i++)
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