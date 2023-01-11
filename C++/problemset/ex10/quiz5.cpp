#include <iostream>
using namespace std;

int rander(int i,int N){
    if(i<=N){
        if(rand()%100 >= 49) return i;
        else return rander(i+1,N);
    }else{
        return i-1;
    }
}

int main(){
    int N;
    cin >> N;
    int data[N] = {};
    srand(time(0));
    
    for(int i=1; i<=1000000000; i++){ //Test Case
        int temp = rander(1,N);
        data[temp-1]++;
    }

    for(int i=0; i<N; i++){
        cout << i+1 << " = " << data[i] << '\n';
    }


}