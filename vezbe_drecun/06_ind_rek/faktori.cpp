#include <iostream>
#include <algorithm>

// faktor ravnoteze cvora je razlika izmedju visina njegovog levog i desnog
// podstabla

using namespace std;

int visina(Cvor* koren) {
    
    if (koren == nullptr)
        return 0;
    
    return 1 + max(visina(koren->levo), visina(koren->desno));
}

int maxFaktor(Cvor* koren) {
    
    if (koren == nullptr)
        return 0;
    
    // racunamo visinu levog i desnog podstabla
    int visinaLevo = visina(koren->levo);
    int visinaDesno = visina(koren->desno);
    
    int faktor = abs(visinaLevo - visinaDesno);
    
    int maxFaktorLevo = maxFaktor(koren->levo);
    int maxFaktorDesno = maxFaktor(koren->desno);
    
    // resenje je maksimum faktora u celom stablu
    return max({faktor, maxFaktorLevo, maxFaktorDesno});
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // dalji kod ali nemamo biblioteku za stabla
    
    return 0;
}
