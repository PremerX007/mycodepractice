/*

Problem Set 16
Quiz 3

*/

#include <iostream>
#include <vector>

using namespace std;

const int N = 4;
const int M = 6;

vector<float> removeNegatives(vector<float> v){
    vector<float> temp;
    for (unsigned int i=0; i<v.size(); i++){
        if(v[i]>=0) temp.push_back(v[i]);
    }
    return temp;
}

int main(){
    vector<float> v;
    float arr[N][M] = {{1,2,3,4,5,6},{0.5,-2.0,-3.7,1.2},{0,0,1,1.2,2.3,-2.5},{-1,-2,-3,-4}}; // Test case
    cout << "\tInput \t\t\t Return\n";
    for (int j=0; j<N; j++){
        for (unsigned int k=0; k<(j%2==0 ?M:N); k++) v.push_back(arr[j][k]);
        cout << "[ ";
        for (unsigned int l=0; l<v.size(); l++){
            cout << v[l] << ' ';
        }
        cout << "] \t=>  ";

        vector <float> result = removeNegatives(v);

        cout << "[ ";
        for (unsigned int l=0; l<result.size(); l++){
            cout << result[l] << ' ';
        }
        cout << "]\n";

        v.clear();
    }
}