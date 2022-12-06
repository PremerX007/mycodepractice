#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    switch (c)
    {
    case 'A':
        cout << "AAAAA" << endl;
        break;
    
    case 'B':
        cout << "BBBBB" << endl;
        break;

    default:
        cout << "Not Match" << endl;
        break;
    }
}
