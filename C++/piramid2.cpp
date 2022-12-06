#include <iostream>

using namespace std;

int main(){
    int a=5,l=5, k=3;
    for(int i=0; i<a; i++){
        for(int j=0; j<l; j++){
            if(j>k){
                cout << "$ ";
            }else{
                cout << ' ';
            }
        }
        cout << endl;
        k--;

    }

}