#include <iostream>

using namespace std;

int main(){
    int n,i =1;
    cin >> n;
    while(n >=0){
        n -= i;
        if(n <= 0){
            cout <<"Patlu";
            return 0;
        }
        n -= 2*i;
        if(n <= 0){
            cout <<"Motu";
            return 0;
        }
        i++;
    }
    return 0;
}
