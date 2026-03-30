#include <iostream>
#include <algorithm>
#include <vector>

// ako znamo da izgenerisemo sve objekte nekog tipa onda lako vrsimo i pretragu
// nad njima
// koristimo induktivno-rekurzivan pristup resavanja
// imacemo u pozadini jedno stablo pretrage

using namespace std;

// u vektoru cuvamo particiju koju trenutno posmatramo tj. generisemo
void particije(int n, int maxSabirak, vector<int>& particija) {
    
    if (n == 0) {
        for (int x : particija)
            cout << x << " ";
        cout << endl;
        return;
    }
    
    // idemo kroz sve moguce sabirke
    for (int sabirak = 1; sabirak <= min(n, maxSabirak); sabirak++) {
        // u delimicnu tj. trenutnu particiju na kraj stavljamo trenutni sabirak
        // i gradimo particiju na dalje
        particija.push_back(sabirak);
        
        // za svaki od mogucih sabiraka moramo da izvrsimo rekurzivan poziv
        particije(n - sabirak, sabirak, particija);
        
        // u povratku iz rekurzivnog poziva obisli smo celo podstablo koje
        // pocinje prefiksom sabirak i onda ga uklanjamo i idemo u sledecu
        // iteraciju
        particija.pop_back();
    }
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> particija;
    particije(n, n, particija);
    
    return 0;
}
