#include <iostream>
using namespace std;

void printPattern2(int N){
    if (N<=0){
        cout << "Invalid input";
        return;
    }

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if(j<(i+1)) cout << 'O';
            else cout << 'X';
        }
        cout << endl;
    }
} 

int main(){
    printPattern2(5);
}