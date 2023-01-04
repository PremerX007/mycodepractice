#include <iostream>

using namespace std;

void printPattern1(int N, int M){
    if (N<=0 || M<=0){
        cout << "Invalid input";
        return;
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(i%2==0){
                if(j%2==0) cout << 'O';
                else cout << 'X';
            }else{
                if(j%2==0) cout << 'X';
                else cout << 'O';
            }
        }
        cout << endl;
    }
}

int main(){
    printPattern1(2,-2);
    cout << endl;
    printPattern1(-3,5);
}