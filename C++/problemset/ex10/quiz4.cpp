#include <iostream>
using namespace std;

/* RANDOM X VALUE */
int line1(){
    return rand()%100 + 1;
}

int line2(){
    while (true){
        int ans = (rand()%23 + 2);
        if(ans%2==0) return ans;
        else continue;
    } 
}

int line3(){
    return rand()%11 - 5;
}

int line4(){
    while (true){
        int ans = (rand()%1023 + 2);
        
    }
}

int main(){
    srand(time(0));
    cout << line1();
    cout << line2();
}