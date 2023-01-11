#include <iostream>
using namespace std;

int findDivisor(int a){
    int i=2;
    while (i<a){
        if (a%i==0){
            return i;
        }
        i++;
    }
}


int main(){
    cout << findDivisor(221);
    return 0;
}