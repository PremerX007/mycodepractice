#include <iostream>

using namespace std;

int main(void){
    while (true)
    {
        int x, y, z;
        x = 0;
        y = 1;
        do
        {
            cout << x << endl;

            z = x + y;
            x = y;
            y = z;
        } while (x < 255);
        
    }
    
}