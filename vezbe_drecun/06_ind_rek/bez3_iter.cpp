#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int brojBez3 = 1;
    int devetke = 1;
    
    while (n > 0) {
        
        int c = n % 10;
        
        if (c < 3)
            brojBez3 = c * devetke + brojBez3;
        else if (c == 3)
            brojBez3 = c * devetke;
        else
            brojBez3 = (c - 1) * devetke + brojBez3;
        
        devetke = devetke * 9;
        n = n / 10;
    }
    
    cout << brojBez3 << endl;
    
    return 0;
}
