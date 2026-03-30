#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int brojParovaDateRazlike(const vector<int>& a, int razlika) {
	
	auto as = a;
	sort(begin(as), end(as));
	
	int brojParova = 0;
	int i = 0;
	int j = 1;

	while (j < as.size()) {
		if (as[j] - as[i] < razlika)
			j++;
		else if (as[j] - as[i] > razlika)
			i++;
		else {
			int ii;
			for (ii = i + 1; ii < as.size() && as[ii] == as[i]; ii++)
				;
			int broj_ai = ii - i;
			i = ii;

			int jj;
			for (jj = j + 1; jj < as.size() && as[jj] == as[j]; jj++)
				;
			int broj_aj = jj - j;
			j = jj;
			
			brojParova += broj_ai * broj_aj;
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