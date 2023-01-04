#include <iostream>
#include <string>
using namespace std;

int countXY(string data){
    int x=0,y=0;
    for(int i=0; i<data.size(); i++){
        if(data[i] == 'X'){
            x++;
        }else{
            y++;
        }
    }
  
    if(x>y){
        return 1;
    }else if(x==y){
        return 0;
    }else{
        return -1;
    }
}


int main(){
    cout << countXY("XYXXYX") << endl;
    cout << countXY("XXYY") << endl;
    cout << countXY("XYYYYY") << endl;
    cout << countXY("XYXY") << endl;
    cout << countXY("XXXXXYYYY") << endl;
    cout << countXY("Y") << endl;
    return 0;;
}
