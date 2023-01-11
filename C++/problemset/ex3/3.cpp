#include <iostream>
using namespace std;

int greatDivisor(int x){
    int temp = x-1;
    while(temp>1){
        if(x%temp==0){
            return temp;
        }
        temp--;
    }
}

int main(){
    cout << greatDivisor(81);
    return 0;
}