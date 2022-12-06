#include <iostream>

using namespace std;

int main(void){
    string code;
    int price, amount;
    cout << "No. of Product : ";
    cin >> code;
    cout << "Price per each : ";
    cin >> price;
    cout << "Amount : ";
    cin >> amount;
    char code_no = code[1];
    switch (code_no)
    {
    case '1':
        cout << "Total :>> " << (price*amount)-((price*amount)*0.3) << endl;
        break;
    case '2':
        if (amount>=3){
            cout << "Total :>> " << (price*amount)-((price*amount)*0.5) << endl;
        }else{
            cout << "Total :>> " << (price*amount)-((price*amount)*0.3) << endl;
        }
        break;
    default:
        cout << "Total :>> " << price*amount << endl;
        break;
    }
}