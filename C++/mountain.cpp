#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int counter, temp, i=0, max;
    string tempData, op;
    cin >> counter;
    cin.ignore();
    int data[counter];
    getline(cin,tempData);
    stringstream st(tempData);

    while (getline(st,op,' ')){
        temp = stoi(op);
        data[i] = temp;
        i++;
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