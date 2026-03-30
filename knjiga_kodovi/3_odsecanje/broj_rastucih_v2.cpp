#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int prethodni;
    cin >> prethodni;
    
    long long brojRastucih = 0;
    
    long long duzinaTekuceRastuce = 1;
    
    for (int i = 1; i < n; i++) {
        
        int tekuci;
        cin >> tekuci;
        
        if (tekuci > prethodni) {
            duzinaTekuceRastuce++;
        } else {
            brojRastucih += duzinaTekuceRastuce * (duzinaTekuceRastuce - 1) / 2;
            duzinaTekuceRastuce = 1;
        }
        
        prethodni = tekuci;
    }
    
    brojRastucih += duzinaTekuceRastuce * (duzinaTekuceRastuce - 1) / 2;
    
    cout << brojRastucih << endl;
    
    return 0;
}
