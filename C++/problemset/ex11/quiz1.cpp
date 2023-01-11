/*

ProblemSet 11
Quiz 1

*/

#include <iostream>
using namespace std;

template <typename T> 
T shifting(T,int);

int main()
{
    // char 'A' (ASCII Code 65) + int 5.5 (5) = char 'F' (ASCII Code 70)
    cout << shifting ('A',5.5) << '\n'; 
    cout << shifting (5,5.5) << '\n'; // int 5 + int 5.5 (5) 
    cout << shifting (6.9f,5.5) << '\n'; // float (6.9) + int 5.5 (5)
    cout << shifting (5.5,'A') << '\n'; // double (5.5) + int ascii 'A' (65)
}

template <typename T>
T shifting (T x,int y){
    return x+y; 
}

