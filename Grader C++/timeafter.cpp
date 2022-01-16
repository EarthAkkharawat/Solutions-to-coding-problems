#include <iostream>

using namespace std;

int main(){
    int hh,mm,m;
    cin >> hh >> mm;
    cin >> m;
    int hr = m/60;
    int mi = m%60;
    int f = hh+hr;
    int s = mm+mi;
    if (s>=60){
        f += s/60;
        s = s%60;
    }
    if (f>=24){
        f %= 24;
    }
    if (f%10==f && s%10==s){
        cout <<0<< f <<" "<<0<< s << endl;
    }
    else if (f%10==f){
        cout <<0<< f <<" "<< s << endl;
    }
    else if (s%10==s){
        cout << f <<" "<<0<< s << endl;
    }
    else {
    cout << f <<" "<< s << endl;
    }
}