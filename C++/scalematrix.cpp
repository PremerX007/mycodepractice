#include <iostream>
#include <iomanip>

using namespace std;

//  Matrix m x n Scale range 0 to 1

float scalemartix(float value, float min, float max){
    return (value-min)/(max-min);
}

int main(){
    int m,n,size,l=0;
    cin >> m;
    cin >> n;
    size = m*n;
    float max,min,temp,data[size];
    for (int i=0; i<size; i++){
        cin >> temp;
        data[i] = temp;
    }
    
    max, min = data[0];
    for (int i=1; i<size; i++){
        if(data[i]>max){
            max = data[i];
        }
        if(data[i]<min){
            min = data[i];
        }
    }

    for (int i=0; i<size; i++){
        data[i] = scalemartix(data[i],min,max);
    }

    cout << fixed;
    cout << setprecision(4);

    for(int j=0; j<n; j++){
        for(int k=0; k<m; k++){
            cout << data[l] << ' ';
            l+=1;
        }
        cout << endl;
    }

}
