#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	vector<int> kilometri(n);
	
	int ukupnoKilometara = 0;
	int i;
	
	for (i = 0; i < n; i++) {
		cin >> kilometri[i];
		ukupnoKilometara += kilometri[i];
	}
	
	float polaPuta = (float)ukupnoKilometara / 2;
	
	int presao = 0;
	int danas = 0;
	int juce;
	
	for (i = 0; !(danas > polaPuta); i++) {
		juce = presao;
		presao += kilometri[i];
		danas = presao;
		if (danas > polaPuta) {
			break;
		}
	}
	
	float odDanas = danas - polaPuta;
	float odJuce = polaPuta - juce;
	
	int resenje = (odDanas < odJuce ? i : i - 1);
	
	cout << resenje << endl;
	
	return 0;
}