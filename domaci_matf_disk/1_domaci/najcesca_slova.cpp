#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	vector<int> mala(26);
	vector<int> velika(26);
	
	char c;
	while (cin >> c) {
		if (islower(c)) {
			mala[c - 'a']++;
		}
		if (isupper(c)) {
			velika[c - 'A']++;
		}
	}
	
    // 	
	// for (int i = 0; i < mala.size(); i++) {
		// cout << mala[i] << " ";
	// }
    // 	
	// cout << endl;
    // 	
		// for (int i = 0; i < velika.size(); i++) {
		// cout << velika[i] << " ";
	// }
    // 	
	// cout << endl;
	
	int mala_max = 0;
	int velika_max = 0;
	
	for (int i = 0; i < mala.size(); i++) {
		if (mala[i] > mala_max) {
			mala_max = mala[i];
		}
	}
	
	for (int i = 0; i < velika.size(); i++) {
		if (velika[i] > velika_max) {
			velika_max = velika[i];
		}
	}
	
	// cout << "Mala max: " << mala_max << endl;
	// cout << "Velika max: " << velika_max << endl;
	
	if (mala_max != 0) {
		for (int i = 0; i < mala.size(); i++) {
			if (mala_max == mala[i]) {
				cout << (char)(i + 'a');
			}
		}
	}
	
	cout << endl;
	
	if (velika_max != 0) {
		for (int i = 0; i < velika.size(); i++) {
			if (velika_max == velika[i]) {
				cout << (char)(i + 'A');
			}
		}
	}
	
	cout << endl;
	
	return 0;
}
