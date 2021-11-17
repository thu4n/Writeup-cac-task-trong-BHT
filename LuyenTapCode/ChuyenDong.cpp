#include <iostream>

using namespace std;

int main(){
    int n, step = 0, counter = 0;
    cin >> n;
    if(n <= 5){
        cout << n;
        return 0;
    }
    while(step < n){
        step += 5;
        counter++;
        if(n - step < 5){
            if(n == step){
                cout << counter;
                return 0;
            }
            step += n - step;
            counter++;
            cout << counter;
            return 0;
        }
    }
    return 0;
}
