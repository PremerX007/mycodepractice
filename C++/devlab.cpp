#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

unsigned int func(int x[]){
    return sizeof(x)/sizeof(x[0]);
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8};
    cout << sizeof(int*) << '\n';
    cout << sizeof(*a) << '\n';
    cout << func(a) << '\n';
    cout << sizeof(char*) << '\n';
    cout << sizeof(double*) << '\n';
    return 0;
}
