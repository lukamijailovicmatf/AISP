#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// svaki broj niza menjamo njegovim rangom
// rang(x) u nizu a - broj elemenata iz niza a koji su strogo manji od x

// 5 20 4 5 -3 4  -> -3 4 4 5 5 20
// 3 5  1 3  0 1

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> niz(n);
    for (int i = 0; i < n; i++)
        cin >> niz[i];
    
    // pravimo kopiju pocetnog niza
    vector<int> sortiran = niz;
    
    sort(begin(sortiran), end(sortiran));
    
    // prolazimo kroz originalni niz i za svaki element pustamo
    // binarnu pretragu da vidimo koliki je rang tog elementa
    for (auto x : niz) {
        auto it = lower_bound(begin(sortiran), end(sortiran), x);
        cout << it - begin(sortiran) << " ";
    }
    cout << endl;
    
    return 0;
}
