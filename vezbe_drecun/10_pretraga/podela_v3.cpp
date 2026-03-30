#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>

// nije nam neophodno da izgradimo celu podelu, sve sto nama treba jesu zbirovi
// tj. vrednosti tih podela
// umesto da racunamo celu podelu i da nako toga prolazimo kroz celu tu podelu
// kada je izgenerisemo mi mozemo samo da generisemo zbirove usputno

using namespace std;

// promenljiva i nam predstavlja indeks elementa u nizu v do kojeg smo trenutno
// stigli tj. element koji trenutno obradjujemo
double svePodele(int i, vector<double>& v, double zbir1, double zbir2) {
    
    // zaustavljamo se kada podelimo sve elemente vektora v
    if (i == v.size())
        return abs(zbir1 - zbir2);
    
    double resLevo = svePodele(i + 1, v, zbir1 + v[i], zbir2);
    double resDesno = svePodele(i + 1, v, zbir1, zbir2 + v[i]);
    
    return min(resLevo, resDesno);
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<double> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
        
    cout << fixed << setprecision(2) << svePodele(0, v, 0, 0) << endl;
    
    return 0;
}
