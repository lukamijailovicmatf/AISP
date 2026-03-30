#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int testera(const vector<int>& visine, int potrebno) {
										
	int od_visina = 0;
	int do_visina = *max_element(begin(visine), end(visine));
	
	while (od_visina <= do_visina) {
		int visina = od_visina + (do_visina - od_visina) / 2;
		long long naseceno = 0;
		for (int v : visine)
			if (v >= visina)
				naseceno += v - visina;
				
			if (naseceno >= potrebno)
				od_visina = visina + 1;
			else
				do_visina = visina - 1;
	}
	
	return do_visina;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int kolicina;
	cin >> kolicina;
		
	int visina = testera(a, kolicina);
	
	cout << visina << endl;	
	
	return 0;
}