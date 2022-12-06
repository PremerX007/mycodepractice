#include <iostream>

using namespace std;


int main(void){
    int round;
    cin >> round;
    for (int i = 1; i<=round; i++){
        for (int j = 0; j<i; j++){
            cout << "#";
        }
        cout << endl;
    }
    for (int i = 1; i<round; i++){
        for (int j = 0; j<round; j++){
            if (j<i){
                cout << " ";
            }else{
                cout << "#";
            }
        }
        cout << endl;
    }
}