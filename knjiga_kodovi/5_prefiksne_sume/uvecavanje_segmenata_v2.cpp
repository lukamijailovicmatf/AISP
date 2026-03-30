#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*

		km	0	 1	 2	 3	 4	 5	 6	 7	 8	 9
			0    0   0   0   0   0   0   0   0   0
        ----------------------------------------------
			0    0   0   0   0   0   0   0   0   0   0
1 5 10      0   10   0   0   0   0 -10   0   0   0   0
3 7 10      0   10   0  10   0   0 -10   0 -10   0   0
2 8 15      0   10  15  10   0   0 -10   0 -10 -15   0
        ----------------------------------------------
			0   10  25  35  35  35  25  25  15   0  <------> prefiksnim sumama/inkrementalno dobijamo konacni niz 

*/

int main(){
	
	int n;
	cin >> n;
	
	vector<int> razlika(n + 1, 0);
	
	int m;
	cin >> m;
	
	for (int i = 0; i < m; i++) {
		int km_od, km_do, masa;
		cin >> km_od >> km_do >> masa;
		razlika[km_od] = razlika[km_od] + masa;
		razlika[km_do + 1] = razlika[km_do + 1] - masa;
	}
	
	int masa_km = 0;
	for (int km = 0; km < n; km++) {
		masa_km = masa_km + razlika[km];
		cout << masa_km << " ";
	}
	
	cout << endl;
	
	return 0;
}