#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <iomanip>
#include <cmath>

// kroz koji  skup i kroz kakve objekte vrsimo pretragu?
// od interesa su nam sve moguce podele tih predmeta
// podelu mozemo da posmatramo kao sve moguce podskupove
// kada odaberemo prvi podskup elemenata oni pripadaju prvom bratu, a ostatak
// ide
// drugom bratu
// treba da prodjemo kroz sve moguce podskupove i da vidimo koji od tih
// podskupova daju najvise fer podelu
// imamo 2^n parova skupova
// vrsimo rekurzivnu pretragu po svim podskupovima datog skupa brojeva

using namespace std;

// funkcija koja pronalazi sledeci binaran broj sto se odnosi na pronalazak
// sledece podele (gde su 1 tu uzimamo vrednosti za prvog brata, a 0 ide za drugog)
// funkcija vraca da li postoji sledeca podela ili ne i to ce nam biti korisno
// prilikom iteracije kroz sve moguce podele
bool sledecaPodela(vector<bool>& podela) {
    
    // pocinjemo od kraja, podela je fiksne dimenzije
    int i = podela.size() - 1;
    
    // idemo od kraja ka pocetku i menjamo sta je potrebno
    while (i >= 0 && podela[i] == 1) {
        podela[i] = 0;
        i--;
    }
    
    if (i < 0)
        return false;
    
    // u ovom trenutku smo dosli do prve 0 sa desne strane i onda je postavljamo
    // na 1
    podela[i] = 1;
    
    // pronasli smo sledecu podelu
    return true;
}

double svePodele(vector<double>& v) {
    
    // generisemo sve moguce podele za jedan konkretan vektor vrednosti
    // velicina ista kao vektor vrednosti, za svaku vrednost imamo true ili false
    vector<bool> podela(v.size());
    
    double res = numeric_limits<double>::max();
    
    // iteracija kroz sve moguce podskupove
    do {
        // obradi podelu, nakon toga pronadji sledecu i ukoliko postoji ponovi
        // petlju ili se zaustavi
        double zbir1 = 0;
        double zbir2 = 0;
        
        // idemo redom kroz sve pozicije u nizu
        for (int i = 0; i < v.size(); i++) {
            if (podela[i])
                zbir1 += v[i];
            else
                zbir2 += v[i];
        }
        res = min(res, abs(zbir1 - zbir2));
    } while (sledecaPodela(podela));
    
    // nakon sto smo petljom prosli kroz sve moguce podele i za sve podele odredili
    // minimalno resenje vracamo konacno resenje
    return res;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<double> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    cout << fixed << setprecision(2) << svePodele(v) << endl;
    
    return 0;
}
