#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int s = a+b+c;
    if (s>=80) cout<<"A";
    else if (s>=75) cout<<"B+";
    else if (s>=70) cout<<"B";
    else if (s>=65) cout<<"C+";
    else if (s>=60) cout<<"C";
    else if (s>=55) cout<<"D+";
    else if (s>=50) cout<<"D";
    else cout<<"F";
}