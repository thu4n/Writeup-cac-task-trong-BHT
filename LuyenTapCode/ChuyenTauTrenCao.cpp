#include <iostream>

using namespace std;

int main(){
    long int k, t;
    cin >> k >> t;
    int num = float(t/k);
    if(t <= k) cout << t;
    else{
        if(num % 2 == 0) cout << t%k;
        else cout << k - (t%k);
    }
    return 0;
}
