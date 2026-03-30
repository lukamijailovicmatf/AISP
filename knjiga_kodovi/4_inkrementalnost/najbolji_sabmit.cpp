#include <iostream>
#include <algorithm>
#include <vector>

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
    
    vector<int> poeni(n);
    for (int i = 0; i < n; i++)
        cin >> poeni[i];
    
    for (int i = 0; i < n; i++) {
        int maxPoeni = poeni[0];
        for (int j = 1; j <= i; j++)
            if (poeni[j] > maxPoeni)
                maxPoeni = poeni[j];
        cout << maxPoeni << endl;
    }
    
    return 0;
}
