#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

// zbir: 1 - 1/1! + 1/2! + ... + (-1)^n/n!

double verovatnoca(int n) {
    
    double p = 1.0;
    double xk = 1.0;
    
    for (int k = 1; k <= n; k++) {
        xk = xk * (-1.0 / k);
        p = p + xk;
    }
    
    return p;
}

int main(){
    
    int n;
    cin >> n;
    
    double resenje = verovatnoca(n);
    
    cout << fixed << setprecision(14) << resenje << endl;
    
    return 0;
}
