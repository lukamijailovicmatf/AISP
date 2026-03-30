#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 15745 18095 15745 16234 13395

int brojParovaDateRazlike(const vector<int>& a, int razlika) {
	
	int brojParova = 0;
	
	for (int x : a) {
		for (int y : a) {
			if (y - x == razlika)
				brojParova++;
		}
	}
	
	return brojParova;
}

int main(){
	
	int razlika;
	cin >> razlika;
	
	int n;
	cin >> n;
	
	vector<int> visine(n);
	for (int i = 0; i < n; i++)
		cin >> visine[i];
		
	int brojParovaUcenika = brojParovaDateRazlike(visine, razlika);
	
	cout << brojParovaUcenika << endl;	
	
	return 0;
}