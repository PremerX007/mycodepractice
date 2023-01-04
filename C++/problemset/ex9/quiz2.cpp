#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    int count=0;
    double min, max;
    cout << "Enter range of the scores [min, max] for counting: ";
    cin >> min >> max;
    ifstream source("score.txt");
    string text;
    while (getline(source, text)){
        if(stod(text) >= min && stod(text) <= max) count++;
    }
    source.close();
    if(min > max) cout << "Invalid input. (max >= min)";
    else cout << "The number of students who have scores in this range = " << count;
}