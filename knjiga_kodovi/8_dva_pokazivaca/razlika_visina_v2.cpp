#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// i                 j     
// 15745 18095 15745 16234 13395

int brojParovaDateRazlike(const vector<int>& a, int razlika) {
	
	auto as = a;
	sort(begin(as), end(as));
	
	int brojParova = 0;
	int n = as.size();
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (as[j] - as[i] == razlika)
				brojParova++;
			else if (as[j] - as[i] > razlika)
				break;
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