#include <iostream>
#include <algorithm>

using namespace std;

int fibonaci(int n) {
	
	if (n == 1 || n == 2)
		return 1;
	else
		return fibonaci(n-1) + fibonaci(n-2);
}

int main(){
	
	int n;
	cin >> n;
	
	int resenje = fibonaci(n);
	
	cout << resenje << endl;
	
	return 0;
}