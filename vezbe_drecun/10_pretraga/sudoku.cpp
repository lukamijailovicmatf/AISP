#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

const int n = 9;

// vrsimo pretragu po svim sudokuima da vidimo da li cemo naci jedan bar
// tamo gde polje nije prazno samo nastavljamo dalje, a gde je polje prazno
// gledamo koje sve brojeve mozemo smestiti u to polje tj. gledamo sve izbore
// za to prazno polje

using namespace std;

bool provera(vector<string>& A, int i, int j) {
    
    // da li se A[i][j] nalazi već u koloni j
    for (int k = 0; k < n * n; k++)
    if (k != i && A[i][j] == A[k][j])
        return false;
    
    
    // da li se A[i][j] nalazi već u vrsti i
    for (int k = 0; k < n * n; k++)
        if (k != j && A[i][j] == A[i][k])
            return false;
        
    // da li se A[i][j] već nalazi u kvadratu koji sadrži polje (i, j)
    int x = i / n, y = j / n;
    for (int k = x * n; k < (x + 1) * n; k++)
        for (int l = y * n; l < (y + 1) * n; l++)
            if ((k != i || l != j) && A[i][j] == A[k][l])
                return false;
            
    return true;
}

// promenljiva pos predstavlja poziciju u sudoki
bool sudoku(vector<string>& s, int pos) {
    
    // racunam vrstu
    int i = pos / n;
    
    // racunam kolonu
    int j = pos % n;
    
    if (pos == n * n)
        return true;
    
    // ako je polje vec popunjeno preskacemo ga
    if (s[i][j] != '0')
        return sudoku(s, pos + 1);
    
    for (char c = '1'; c <= '9'; c++) {
        // postavi vrednost c na polje (i,j)
        s[i][j] = c;
        
        // ukoliko prodje provera za postavljenu vrednost na tom polju onda
        // trazimo resenje u toj grani
        if (provera(s, i, j))
            if (sudoku(s, pos + 1))
                return true;
    }
    
    // ako smo izasli iz petlje to znaci da nijedan od 1 do 9 brojeva nije
    // mogao da se smesti u polje i da resimo sudoku
    s[i][j] = '0';
    return false;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    vector<string> s(n);
    
    // citamo sudoku red po red
    for (int i = 0; i < n; i++)
        cin >> s[i];
    
    if (sudoku(s, 0)) {
        for (int i = 0; i < n; i++)
            cout << s[i] << endl;
    } else {
        cout << "nema" << endl;
    }
    
    return 0;
}
