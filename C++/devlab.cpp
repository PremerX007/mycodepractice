#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d){
	int n1 = rand()%4;
	int n2 = rand()%4;
	cout << n1 << " " << n2 << "\n";
	int *arr[] = {a,b,c,d};

	int temp = *arr[n1];
    *arr[n1] = *arr[n2];
    *arr[n2] = temp;
}