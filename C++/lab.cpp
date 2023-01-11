// #include <fstream>
#include <iostream>

using namespace std;

void func(int a, int &b, int &c){
    c = 2*a;
    a = 2*c; 
    b = 2;
}

int main(){
    int a=1, b=2, c=3;
    func(a,b,c);
    cout << a << ' ' << b << ' ' << c << ' ';
}