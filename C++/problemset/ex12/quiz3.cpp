/*

Problem Set 12
Quiz 3

*/

#include <iostream>
#include <cmath>
using namespace std;

double determinant(double [][10],int);

int main(){
    int M;
    cout << "Please input matrix size: ";
    cin >> M;
    double set[M][10];
    for(int i=0; i<M; i++){
        cout << "Input elements of row " << i+1 << ": ";
        for(int j=0; j<M; j++) cin >> set[i][j];
    }
    cout << "Determinant of your matrix is " << determinant(set,M);
}


double determinant(double set[][10], int N){
    double det = 0;
    double sign = 1;
    
    if (N==1) return set[0][0];
    else if (N==2){
        return (set[0][0]*set[1][1]) - (set[1][0]*set[0][1]);
    }else{
        for (int count = 0; count < N; count++){
            double newarr[N-1][10];
            for(int k=0; k<(N-1); k++){
                int l = 0;
                for (int n=0; n<N; n++){
                    if (count != n){
                        newarr[k][l] = set[k+1][n];
                        l++;
                    }
                }
            }
            det += sign * set[0][count] * determinant(newarr, N-1);
            sign = -sign;
        }
        return det;
    }
}
