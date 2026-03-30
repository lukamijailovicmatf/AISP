#include <iostream>
#include <algorithm>

using namespace std;

string grejov_kod(unsigned n, unsigned k) {
    
    string zapis = "";
    
    while (n > 0) {
        
        // ako smo u prvoj polovini
        if (k < (1u << (n - 1))) {
            zapis += "0";
            n = n - 1;
        } else {
            zapis += "1";
            k = (1u << n) - 1 - k;
            n = n - 1;
        }
    }
    
    return zapis;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    unsigned n;
    cin >> n;
    
    unsigned k;
    cin >> k;
    
    cout << grejov_kod(n, k) << endl;
    
    return 0;
}
