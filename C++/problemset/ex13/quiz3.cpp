/*

Problem Set 13
Quiz 3

*/

#include <iostream>
using namespace std;

const int N = 3;
void inputMatrix(double [][N]);
void matrixMultiply(const double [][N], const double [][N], double [][N]);
void showMatrix(const double [][N]);

int main(){
    double A[N][N], B[N][N], C[N][N]; 
    cout << "Input the first matrix.....\n";
    inputMatrix(A);
    cout << "Input the second matrix.....\n";
    inputMatrix(B);
    matrixMultiply(A,B,C);
    cout << "Result is \n";
    showMatrix(C);

    return 0;
}

void inputMatrix(double arr[][N]){
    for(int row=0; row<N; row++){
        cout << "Row " << row+1 << ": ";
        for(int i=0; i<N; i++) cin >> arr[row][i];
    }
}

void matrixMultiply(const double a[][N], const double b[][N], double c[][N]){
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            double sum = 0;
            for (int k=0; k<N; k++){
                sum += (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
        }
    }
}

void showMatrix(const double arr[][N]){
    for(int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
}