#include <iostream>
#include <algorithm>

using namespace std;

// proverava da li niska na pozicijama [i, j] sadrzi karakter c
bool podniskaSadrziKarakter(const string& niska, int i, int j, char c) {

	for (int k = i; k < j; k++)
		if (niska[k] == c)
			return true;
	return false;
}

// provera da li niska na pozicijama [i, j] sadrzi sve karaktere iz niske S
bool podniskaSadrziSveKaraktere(const string& niska, int i, int j, const string& S) {

	for (char c : S)
		if (!podniskaSadrziKarakter(niska, i, j, c))
			return false;
	return true;
}

// "beskonacno"
const int INF = numeric_limits<int>::max();

int duzinaPodniske(const string& niska, const string& S) {

	int minDuzina = INF;
	for (int i = 0; i < niska.size(); i++) {
		if (S.find(niska[i]) == string::npos)
			continue;
		for (int j = i; j < niska.size(); j++)
			if (podniskaSadrziSveKaraktere(niska, i, j, S)) {
				int duzina = j - i + 1;
				if (duzina < minDuzina)
					minDuzina = duzina;
				break;
			}
	}
	return minDuzina;
}

int main(){
	
	
	
	return 0;
}