#include <iostream>
#include <algorithm>

using namespace std;

// funkcija racuna maksimalni faktor i visinu istovremeno
// ojacavanje induktivne hipoteze
// ali ono sto trazimo od rekurzivnog poziva to moramo i da vratimo (visina)
void maxFaktorIVisina(Cvor* koren, int& visina, int& maxFaktor) {
    
    if (koren == nullptr) {
        visina = 0;
        maxFaktor = 0;
        return;
    }
    
    int visinaLevo, maxFaktorLevo;
    maxFaktorIVisina(koren->levo, visinaLevo, maxFaktorLevo);
    
    int visinaDesno, maxFaktorDesno;
    maxFaktorIVisina(koren->desno, visinaDesno, maxFaktorDesno);
    
    int faktor = abs(visinaLevo - visinaDesno);
    
    maxFaktor = max({faktor, maxFaktorLevo, maxFaktorDesno});
    
    visina = 1 + max(visinaLevo, visinaDesno);
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // dalji kod ali nemamo biblioteku za stabla
    
    return 0;
}
