#include <iostream>

using namespace std;

int main(){
    int t, multi = 1, index = 0, arri;
    cin >> t;
    for(int i =0; i < t; i++){
        cin >> arri;
        index = arri % 12;
        switch(index){
            case 0: //hang 6, cot ben phai{
                    cout << arri - 11 << " WS" << endl;
                    break;
                }
            case 1: //hang 6, cot ben trai{
                    cout << arri + 11 << " WS" << endl;
                    break;
                }
            case 2: //hang 5, cot ben trai{
                    cout << arri + 9 << " MS" << endl;
                    break;
                }
            case 3: //hang 4, cot ben trai{
                    cout << arri + 7 << " AS" << endl;
                    break;
                }
            case 4: //hang 3, cot ben trai{
                    cout << arri + 5 << " AS" << endl;
                    break;
                }
            case 5: //hang 2, cot ben trai{
                    cout << arri + 3 << " MS" << endl;
                    break;
                }
            case 6: //hang 1, cot ben trai{
                    cout << arri + 1 << " WS" << endl;
                    break;
                }
            case 7: //hang 1, cot ben phai{
                    cout << arri - 1 << " WS" << endl;
                    break;
                }
            case 8: //hang 2, cot ben phai{
                    cout << arri - 3 << " MS" << endl;
                    break;
                }
            case 9: //hang 3, cot ben phai{
                    cout << arri - 5 << " AS" << endl;
                    break;
                }
            case 10: //hang 4, cot ben phai{
                    cout << arri - 7 << " AS" << endl;
                    break;
                }
            case 11: //hang 5, cot ben phai{
                    cout << arri - 9 << " MS" << endl;
                    break;
                }
        }
    }
    return 0;
}
