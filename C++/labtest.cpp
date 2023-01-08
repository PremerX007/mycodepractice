#include<iostream>
using namespace std;

int main(){
	int i=1,num=1,count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << '\n';
    char grade;
    do{
		cout << "Student [" << num <<  "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		switch (grade){
        case 'A':
            count[0]++;
            num++;
            break;
        case 'B':
            count[1]++;
            num++;
            break;
        case 'C':
            count[2]++;
            num++;
            break;
        case 'D':
            count[3]++;
            num++;
            break;
        case 'F':
            count[4]++;
            num++;
            break;
        case '0':
            i=0;
            break;
        default:
            cout << "Wrong input. Please input again." << '\n';
            break;
        }
	}while(i);
	
	
	cout << "In total " << num << " students." << '\n';
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}