#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int a;
    int b;
    int k;
    
    cin >> a >> b >> k;
    
    int brojDeljivih = 0;
    
    // [a,b]
    for (int i = a; i <= b; i++)
        if (i % k == 0)
            brojDeljivih++;
        
    cout << brojDeljivih << endl;
    
    return 0;
}
