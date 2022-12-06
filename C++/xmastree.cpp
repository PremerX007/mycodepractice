#include <iostream>
#include <cmath>

using namespace std;

void head(int n){
    int ip=2,ip2,ip3;
    while(ip<n+2){
    ip2 = n;
    ip3 = n;
    for(int i=0; i<ip; i++){
        for(int j=0; j<=ip2; j++){
            if(j>=ip3){
                cout << '*';
            }else{
                cout << ' ';
            }
        }  
        ip3--;
        ip2++;
        cout << endl;
        }
    if(ip==n+1){
        for(int j=0; j<=n; j++){
            if(j>=n){
                cout << '|';
            }else{
                cout << ' ';
            }
        }
        cout << endl;
        for(int m=0; m<=n*2; m++){
            if(m==n){
                cout << 'V';
                
            }else{
                cout << '=';
            }
        }
    }
    ip++;
    }
    
}


int main(){
    int n;
    cin >> n;
    head(n);
    return 0;
}