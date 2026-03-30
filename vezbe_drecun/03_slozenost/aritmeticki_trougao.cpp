#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // Nk - poslednji element u redu k
    // Nk = k * k
    
    // Np - poslednji element u redu k-1
    // Np = (k-1) * (k-1)
    
    // u long long staje 10^18
    // u obican int staje 10^9
    
    uint64_t k;
    cin >> k;
    
    uint64_t Nk = k * k;
    uint64_t Np = (k-1) * (k-1);
    
    // Tk - trougao koji se zavrsava u redu k
    uint64_t Tk = Nk * (Nk + 1) / 2;
    
    // Tp - trougao koji se zavrsava u redu k-1
    uint64_t Tp = Np * (Np + 1) / 2;
    
    cout << Tk - Tp << endl;
    
    return 0;
}
