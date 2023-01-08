#include <iostream>
#include <cmath>
using namespace std;

/* RANDOM X VALUE */
int line1(){
    return rand()%100 + 1;
}

int line2(){
    return 2*(rand()%12 + 1);
}

int line3(){
    return rand()%11 - 5;
}

int line4(){
    return pow(2, rand()%10 + 1);
}

int main(){
    srand(time(0));
    cout << line1() << '\n';
    cout << line2() << '\n';
    cout << line3() << '\n';
    cout << line4() << '\n';
}