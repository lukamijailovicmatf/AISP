#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// < rastuce
// <= neopadajuce
// > opadajuce
// >= nerastuce

bool poredjenjeParova(pair<float, int> a, pair<float, int> b) {
	
	bool povratnaVrednost = (a.first > b.first);
	if (a.first == b.first) {
		povratnaVrednost = (a.second < b.second);
	}
	
	return povratnaVrednost;
}

int main() {
	
	int brojUcenika;
	cin >> brojUcenika;
	
	int brojOcena;
	cin >> brojOcena;
	
	vector<pair<float, int>> proseci(brojUcenika);
	vector<vector<int>> M(brojUcenika, vector<int> (brojOcena));
	
	for (int i = 0; i < brojUcenika; i++) {
		proseci[i].first = 0;
		proseci[i].second = i;
		for (int j = 0; j < brojOcena; j++) {
			cin >> M[i][j];
			proseci[i].first += (float)M[i][j];
		}
		proseci[i].first /= (float)brojOcena;
	}
	
	sort(proseci.begin(), proseci.end(), poredjenjeParova);
	
	cout << "---------" << endl;
	
	for (int i = 0; i < brojUcenika; i++) {
		for (int j = 0; j < brojOcena; j++) {
			cout << M[proseci[i].second][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}