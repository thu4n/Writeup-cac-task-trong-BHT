#include <iostream>

using namespace std;

int main(){
    int T, blue, purple, num, i, j, sum, iCounter = 0, jCounter = 0, cheap, expensive;
    cin >> T;
    while(T>0){
        cin >> blue >> purple;
        cin >> num;
        if(blue < purple){
          cheap = blue;
          expensive = purple;
        }
        else{
        cheap = purple;
        expensive = blue;
        }
        sum = 0;
        for(int m =0; m < num; ++m){
           cin >> i >> j;
           if(i == 1 && j == 1) sum += blue + purple;
           else if(i == 1 && j == 0) ++iCounter;
           else if(i == 0 && j == 1) ++jCounter;
        }
        if(iCounter >= jCounter) sum += cheap*iCounter +expensive*jCounter;
        else sum += expensive*iCounter + cheap*jCounter;
        cout << sum << endl;
        --T;
        iCounter = 0;
        jCounter = 0;
    }
    return 0;
}
