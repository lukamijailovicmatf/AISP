#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
	
	int trazeniZbir;
	cin >> trazeniZbir;
	
	int zbirPrefiksa = 0;
	int brojSegmenata = 0;
	map<int, int> zbiroviPrefiksa;
	
	zbiroviPrefiksa[0] = 1;
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		zbirPrefiksa = zbirPrefiksa + x;
		auto it = zbiroviPrefiksa.find(zbirPrefiksa - trazeniZbir);
		if (it != zbiroviPrefiksa.end())
			brojSegmenata = brojSegmenata + it->second;
		zbiroviPrefiksa[zbirPrefiksa]++;
	}
	
	cout << brojSegmenata << endl;
	
	return 0;
}