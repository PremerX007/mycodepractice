#include <iostream>

using namespace std;

int main(void){
    int n,m,l;
    cin >> n;
    l = n;
    m = n;
    for(int i=0; i<n; i++){
        for(int k=1; k<=l; k++){
            if(k>=m){
                cout << '*';
            }else{
                cout << ' ';
            }
        }
        l++;
        m--;
        cout << endl;
    }

    l = n+(n-1);
    m = n-(n-1);

    for(int i=0; i<n-1; i++){
        l--;
        m++;
        for(int k=1; k<=l; k++){
            if(k>=m){
                cout << '*';
            }else{
                cout << ' ';
            }
        }
        cout << endl;
    }

    
}

/*
int n,m,l;
    cin >> n;
    for(int c=0; c<2; c++){
        if(c==0){
            l = n;
            m = n;
        }
        else{
            l-=2;
            m+=2;
            n-=1;
        }
        for(int i=0; i<n; i++){
            for(int k=1; k<=l; k++){
                if(k>=m){
                    cout << '*';
                }else{
                    cout << ' ';
                }
            }
            if(c==0){
                l++;
                m--;
            }else{
                l--;
                m++;
            }
            cout << endl;
        }
    }
*/