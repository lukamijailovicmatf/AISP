#include <iostream>
#include <algorithm>

using namespace std;

int f(string n) {
    
    int brCifara = n.size();
    
    if (brCifara == 0)
        return 1;
    
    // f(c*n) = c * f(9...9) + f(n)
    int c = n[0] - '0';
    string devetke(brCifara - 1, '9');
    string ostatak = n.substr(1);
    
    if (c < 3)
        return c * f(devetke) + f(ostatak);
    
    if (c == 3)
        return c * f(devetke);
    
    return (c - 1) * f(devetke) + f(ostatak);
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    // radimo sa string tipom jer je lakse
    string n;
    cin >> n;
    
    cout << f(n) << endl;
    
    return 0;
}
