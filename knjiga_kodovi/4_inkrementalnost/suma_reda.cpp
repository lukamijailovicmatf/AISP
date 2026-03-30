#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>

using namespace std;

double faktorijel(int n) {
    
    double p = 1.0;
    
    for (int i = 2; i <= n; i++)
        p = p * i;
    
    return p;
}

// zbir: 1 - 1/1! + 1/2! + ... + (-1)^n/n!

double verovatnoca(int n) {
    
    double p = 0.0;
    
    for (int i = 0; i <= n; i++)
        p = p + pow(-1, i) / faktorijel(i);
    
    return p;
}

int main(){
    
    int n;
    cin >> n;
    
    double resenje = verovatnoca(n);
    
    cout << fixed << setprecision(14) << resenje << endl;
    
    return 0;
}
