#include <iostream>

using namespace std;

int main(){
    int n, num = 0, a;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> a;
    }
    if(a % 10 == 0) cout << "Yes";
    else cout << "No";
    return 0;
}
