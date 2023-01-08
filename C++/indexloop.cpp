#include <iostream>
using namespace std;


void pattern1(){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(j<(i+1)) cout << j+1;
            else break;
        }
        cout << '\n';
    }
    cout << '\n';
}

void pattern2(){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if(j<(6-i)) cout << j+1;
            else break;
        }
        cout << '\n';
    }
    cout << '\n';
}

void pattern3(){
    for(int i=1; i<=6; i++){
        for(int j=6; j>=1; j--){
            if(j<=i) cout << j;
            else cout << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

void pattern4(){
    for(int i=0; i<6; i++){
        for(int j=6; j>=1; j--){
            if(j<=(6-i)) cout << j;
            else cout << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

int main(){
    pattern1();
    pattern2();
    pattern3();
    pattern4();
    return 0;;
}
