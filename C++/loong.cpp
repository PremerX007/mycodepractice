#include <iostream>
using namespace std;


int main()
{
	int costu,year,ys;
  string name,sex;
  cin >> costu;
  string name_i[costu];
  int year_i[costu];
 	string sex_i[costu];
  for (int i = 0; i<costu; i++){
    getline(cin,name);
    cin >> year;
    getline(cin,sex);
    
    name_i[i] = name;
    year_i[i] = year;
    sex_i[i] = sex;
  }
  
  cout << "--Customers Information--" << endl;
  for (int i = 0; i<costu; i++){
    ys = 2017-year_i[i];
    cout << name_i[i] << " (age : " << ys << ')' << endl;
  }
}