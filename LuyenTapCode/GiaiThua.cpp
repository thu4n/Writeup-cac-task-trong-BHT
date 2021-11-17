#include <iostream>

using namespace std;

int main(){
    long int n, giaithua = 1;
    cin >> n;
    for(long int i =1;i<=n;i++){
        giaithua *= i;
    }
    cout << giaithua;
    return 0;
}
