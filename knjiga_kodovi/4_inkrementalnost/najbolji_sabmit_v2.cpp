#include <iostream>
#include <algorithm>

using namespace std;

// 0 1 2 3 4 <------> pozicije
// 3 2 4 1 5 <------> poeni

// maksimum svakog prefiksa
// 3            3
// 3 2          3
// 3 2 4        4
// 3 2 4 1      4
// 3 2 4 1 5    5

int main(){
    
    int n;
    cin >> n;
    
    int maxPoena = 0;
    
    for (int i = 0; i < n; i++) {
        int poeni;
        cin >> poeni;
        if (poeni > maxPoena)
            maxPoena = poeni;
        cout << maxPoena << endl;
    }
    
    return 0;
}
