#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int m;
	cin >> m;
	
	vector<vector<int>> M(n, vector<int>(m));
	
	// ucitavamo matricu
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> M[i][j];
		}
	}
	
	// umanjujemo ako ima manji levo
	// krecemo iz nulte vrste i prve kolone
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			M[i][j] = M[i][j-1] < M[i][j] ? M[i][j-1] : M[i][j];
		}
	}
	
	// umanjujemo ako ima manji gore
	// krecemo od nulte kolone i prve vrste
	for (int j = 0; j < m; j++) {
		for (int i = 1; i < n; i++) {
			M[i][j] = M[i-1][j] < M[i][j] ? M[i-1][j] : M[i][j];
		}
	}
	
	cout << "---------------------" << endl;
	
	// ispisujemo finalnu matricu
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}