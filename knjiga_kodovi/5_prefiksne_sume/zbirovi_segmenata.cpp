#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    vector<int> brojevi(n);
    for (int i = 0; i < n; i++)
        cin >> brojevi[i];
    
    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int zbir = 0;
        for (int j = a; j <= b; j++)
            zbir = zbir + brojevi[j];
        cout << zbir << endl;
    }
    
    return 0;
}
