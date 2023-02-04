/*

Problem Set 13
Quiz 1

*/

#include <iostream>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}
template <typename T>
void selectionSort(T d[],int N){
    for (int i=0; i<N; i++){
        T min = d[i];
        for (int j=i; j<N; j++){
            if(d[j]<=min) min = d[j];
        }
        for (int j=i; j<N; j++){
            if(d[j] == min) swap(d,i,j);
        }
    }
}

int main(){
    const int N = 7;
    int arr[N] = {42,16,84,12,77,26,53};
    selectionSort(arr, N);

    for (int i=0; i<N; i++) cout << arr[i] << ' ';
}