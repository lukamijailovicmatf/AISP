#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    // radimo inkrementalno, uzimamo izracunato iz prethodnog koraka i koristimo
    // u narednom koraku
    // trenutni_fact = prethodni_fact * trenutni_broj
    uint64_t faktorijel = 1;
    for (int i = 1; i <= n; i++) {
        faktorijel = faktorijel * i;
        cout << faktorijel << endl;
    }
    
    return 0;
}
