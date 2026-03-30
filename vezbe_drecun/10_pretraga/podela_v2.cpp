#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <limits>
#include <iomanip>

using namespace std;

// imamo kao parametre vektor vrednosti i trenutnu podelu koju smo do sada
// napravili, ona je na pocetku prazna pa cemo na kraj da dodajemo i skidamo
// 0 i 1
double svePodele(vector<double>& v, vector<bool>& podela) {
    
    // bazni slucaj tj. izlaz iz rekurzije
    if (podela.size() == v.size()) {
        // obrada podele
        double zbir1 = 0;
        double zbir2 = 0;
        for (int i = 0; i < v.size(); i++) {
            if (podela[i])
                zbir1 += v[i];
            else
                zbir2 += v[i];
        }
        return abs(zbir1 - zbir2);
    }
    
    // mi zelimo da nam funkcija vrati minimum od svih razlika u svakoj posebnoj
    // podeli, a minimum za svaki cvor u stablu je minimum levog i desnog
    // podstabla
    podela.push_back(0);
    double resLevo = svePodele(v, podela);
    podela.pop_back();
    
    // neophodno je da radimo pop_back zbog prethodnih rekurzivnih poziva
    // koji ocekuju da nismo izmenili podelu
    
    podela.push_back(1);
    double resDesno = svePodele(v, podela);
    podela.pop_back();
    
    // minimum u celom stablu tj. celom podstablu bice minimum levog i minimum
    // desnog
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
    
    vector<bool> podela;
    
    cout << fixed << setprecision(2) << svePodele(v, podela) << endl;
    
    return 0;
}
