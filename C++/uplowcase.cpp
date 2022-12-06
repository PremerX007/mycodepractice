#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    char text[100];
    cin.getline(text,100);
    for (int i=0; i<strlen(text); i++){
        if(isupper(text[i])){
            putchar(tolower(text[i]));
        }else{
            putchar(toupper(text[i]));
        }
    }
}