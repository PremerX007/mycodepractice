/*

Problem Set 15
Quiz 1

*/

#include<iostream>
#include<iomanip>
using namespace std;

void myMatrix(int ***arr, int N){
    *arr = new int *[N];
    for (int i=0; i<N; i++) *(*arr+i) = new int[N];
    for (int j=0; j<N; j++){
        for(int k=0; k<N; k++){
            *(*(*arr+j)+k) = k+j;
        }
    }
}

void freeSpace(int **&p, int N){
    for (int i=0; i<N; i++) delete [] p[i];
    delete [] p;
}

int main(){
    int **p;
    int N;
    cout << "N = ";
    cin >> N;
    myMatrix(&p,N);
    for(int i=0;i < N; i++){
        for(int j=0;j < N; j++){
            cout << setw(4) << p[i][j];
        }
    cout << "\n";
    }
    freeSpace(p,N);
    return 0;
}