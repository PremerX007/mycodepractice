/*

Problem Set 16
Quiz 2

*/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    ifstream input("score.txt");
    string text;
    vector<float> v;
    while(getline(input,text)){
        v.push_back(stof(text));
    }
    input.close();

    // Test panel
    for (unsigned int i=0; i<v.size(); i++) cout << v[i] << ' ';
    
    return 0;
}