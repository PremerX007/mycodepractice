/*

ProblemSet 11
Quiz 3

*/

#include <iostream>
#include <cmath>
using namespace std;

int line1(int);
double line2(int);
double line3(int);

int main(){ // Value Test Case = 10
    cout << line1(10) << '\n';
    cout << line2(10) << '\n';
    cout << line3(10) << '\n';
    return 0;
}

int line1(int N){
    if(N==1) return 2;
    else return pow(2,N) + line1(N-1);
}

double line2(int N){
    if(N==1) return 1;
    else return sqrt(N*line2(N-1));
}

double line3(int N){
    if(N==0) return 0;
    else return 1 + (N/line3(N-1));
}