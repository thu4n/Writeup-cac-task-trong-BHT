#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a>b) cout << "max = " << a << endl << "min = " << b;
    else cout << "max = " << b << endl << "min = " << a;
    return 0;
}
