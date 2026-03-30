#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int maxZbir = 0;
    int zbir = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        zbir = zbir + x;
        if (zbir > maxZbir)
            maxZbir = zbir;
    }
    
    cout << maxZbir << endl;
    
    return 0;
}
