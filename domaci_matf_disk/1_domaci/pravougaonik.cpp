#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	int ax, bx, ay, by;
	cin >> ax >> bx >> ay >> by;
	
	int sirina = ax - ay;
	if (sirina < 0)
		sirina *= -1;
		
	int visina = bx - by;
	if (visina < 0)
		visina *= -1;
	
	float dijagonala = sqrt(sirina * sirina + visina * visina);
	int obim = 2 * (sirina + visina);
	int povrsina = sirina * visina;
	
	cout << fixed << setprecision(2) << dijagonala << endl;
	cout << obim << endl;
	cout << povrsina << endl;
	
	return 0;
}