#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string izraz;
    cin >> izraz;
    
    // stek operacija
    stack<char> opStek;
    
    // stek vrednosti
    stack<int> vrStek;
    
    // idemo redom kroz izraz i gledamo karakter po karakter
    for (char c : izraz) {
        // ukoliko je procitani karakter cifra onda ide na stek vrednosti
        if (isdigit(c))
            vrStek.push(c - '0');
        else if (c == 'm' || c == 'M')
            opStek.push(c);
        else if (c == ')') {
            int a = vrStek.top();
            vrStek.pop();
            
            int b = vrStek.top();
            vrStek.pop();
            
            char op = opStek.top();
            opStek.pop();
            
            int rez = (op == 'm' ? min(a,b) : max(a,b));
            
            vrStek.push(rez);
        }
    }
    
    // rezultat nam se nalazi na vrhu steka vrednosti
    cout << vrStek.top() << endl;
    
    return 0;
}
