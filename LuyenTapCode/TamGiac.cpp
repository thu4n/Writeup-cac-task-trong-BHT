#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>

using namespace std;

void DienTich( long double a, long double b, long double c, char d){
    long double dientich;
    long double p = (a+b+c)/2;
    dientich =  sqrt(p*(p-a)*(p-b)*(p-c));
    dientich *= 100;
    dientich += 0.5;
    long long int LamTron =dientich;
    dientich = LamTron;
    dientich /= 100;
    string cuoicung = to_string(dientich);
    int dauCham = cuoicung.find('.');
    if(cuoicung[dauCham+1] == '0' && cuoicung[dauCham+2] == '0'){
        cuoicung.erase(dauCham+1);
        cuoicung.erase(dauCham);
    }
    for(int i = cuoicung.size(); i > dauCham + 1;i--){
        if(cuoicung[i] == '0'){
            cuoicung.pop_back();
        }
    }
    string cuoicung2 = cuoicung.substr(0,dauCham + 3);
    switch(d){
        case 'd':{
            cout << "Tam giac deu, dien tich = "  << cuoicung2;
            break;
        }
        case 'c':{
            cout << "Tam giac can, dien tich = "  << fixed  << cuoicung2;
            break;
        }
        case 'v':{
            cout << "Tam giac vuong, dien tich = "  << fixed  << cuoicung2;
            break;
        }
        case 't':{
            cout << "Tam giac thuong, dien tich = "  << cuoicung2;
            break;
        }
    }
}
bool tgv( long double a, long double b, long double c){
    long double a1 = a*a;
    long double b1 = b*b;
    long double c1 = c*c;
    if( a1 + b1 == c1 || b1 == a1 + c1 || c1 + b1 == a1 ){
        return true;
    }
    return false;
}
int main(){
    long double a,b,c;
    char loaiTamGiac;
    double epsilon = 0.00001;
    cin >> a >> b >> c;
    if(a + b <= c || a + c <= b || b + c <= a){
        cout <<"Khong phai tam giac";
    }
    else if( a == b && a == c){
        loaiTamGiac = 'd';
        DienTich(a,b,c,loaiTamGiac);
        return 0;
    }
    else if(abs(a - b) < epsilon || abs(a - c) < epsilon || abs(b - c) < epsilon){
        if(tgv(a,b,c)){
            loaiTamGiac = 't';
            DienTich(a,b,c,loaiTamGiac);
            return 0;
        }
        else{
            loaiTamGiac = 'c';
            DienTich(a,b,c,loaiTamGiac);
            return 0;
        }
    }
    else if(tgv(a,b,c)){
        loaiTamGiac = 'v';
        DienTich(a,b,c,loaiTamGiac);
        return 0;
    }
    else if(a + b > c || a + c > b || b + c > a){
        loaiTamGiac = 't';
        DienTich(a,b,c,loaiTamGiac);
        return 0;
    }
    return 0;
}
