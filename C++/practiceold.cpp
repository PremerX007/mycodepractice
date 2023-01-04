#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	for (int i=1; i<6; i++){
		cout << ' ' * 6-i << '*' * 2*i-1 << endl;
	}
	return 0;
}	