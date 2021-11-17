#include <iostream>

using namespace std;

int main(){
    int soCon, soChan, soGa, soCho;
    cin >> soCon >> soChan;
    soGa = (4*soCon - soChan)/2;
    soCho = soCon - soGa;
    cout << soGa << " " << soCho;
    return 0;
}
