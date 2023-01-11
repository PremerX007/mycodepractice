/*

ProblemSet 11 
Quiz 2

======= RESULT =======
*** LOOP TEST ***
Result: 12586269025
Elapsed Time: 9e-06 seconds. <= Faster!!!

*** RECUSIVE TEST ***
Result : 12586269025
Elapsed Time: 76.8557 seconds.

*/

#include <iostream>
#include <ctime>
using namespace std;

long long int fibonacci_iterative(long long int);
long long int fibonacci_recursive(long long int);

int main(){
    cout << "*** LOOP TEST ***" << '\n';
    clock_t start = clock();
    cout << "Result: " << fibonacci_iterative(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds." << "\n\n";

    cout << "*** RECUSIVE TEST ***" << '\n';
    start = clock();
    cout << "Result: " << fibonacci_recursive(50) << "\n";
    end = clock();
    elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    
    return 0;
}

long long int fibonacci_iterative(long long int x){
    if(x<=1) return x;
    else{
        long long int temp2=0, temp1=1, sum;
        for(int i=2; i<=x; i++){
            sum = temp2 + temp1;
            temp2 = temp1;
            temp1 = sum;
        }
        return sum;
    }
}

long long int fibonacci_recursive(long long int x){
    if (x<=1) return x;
    else return fibonacci_recursive(x-1) + fibonacci_recursive(x-2);
}
