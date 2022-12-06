#include <iostream>
using namespace std;


int main()
{
    int a,k=1,l;
    cin >> a;
 	l = a;
    for (int i = 1; i<=a; i++){
        for(int j = 1; j<=l; j++){
        if(j>a-k){
            cout << "*";
        }else{
            cout << " ";
        }
        }
        cout << endl;
        l++;
        k++;
    }
}