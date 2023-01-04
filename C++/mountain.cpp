#include <iostream>

using namespace std;

int main(){
    int counter, temp, i=0, max;
    cin >> counter;
    int data[counter];

    for (int i=0; i<counter; i++){
        cin >> data[i];
    }

    max = data[0];
    for (int i=0; i<counter; i++){
        if (data[i]>max){
            max = data[i];
        }
    }

    for (int i=0; i<max; i++){
        for (int j=0; j<counter; j++){
            for (int k=1; k<=data[j]; k++){
                if (i+k == max){
                    cout << '/';
                }
                else{
                    cout << ' ';
                }
            }
            for (int l=data[j]; l>0; l--){
                if (i+l == max)
                {
                    cout << '\\';
                }else{
                    cout << ' ';
                }
                
            }
        }
        cout << endl;
    }

    return 0;
}
