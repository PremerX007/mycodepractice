#include <iostream>
using namespace std;

int main(){
    int i=1, length, data[100]={0};
    do{
        cout << "Input the burner location: ";
        cin >> length;
        if(length<100 && length >=0){
            data[i] = length;
            
            if(i==1){
                i++;
                continue;
            }
            else if(data[i]<=data[i-1]){
                cout << "Next location must be greater than " << data[i-1] << '.' << '\n';
                continue;
            }else{
                i++;
            }

        }else{
            if(length==100) data[i] = 100;
            break;
        }
    }while(true);

    int value;
    double time,temp=0;
    int min = data[1];
    if((data[1] == 0) && (data[i] == 100)){ // จุดทั้งสองด้าน
        for(int j=0; j<i; j++){
            value = data[j+1]-data[j];
            if(value>min) min = value;
        }
        temp = min/20.0;
    }else if(data[1] == 0 && data[i] != 100){ // จุดแค่ด้านต้น ด้านปลายไม่จุด
        for(int j=0; j<i; j++){
            if(j==(i-1)){
                value = 100-data[j];
                time = value/10.0;
                if(time>temp) temp = time;
            }
            value = data[j+1]-data[j];
            time = value/20.0;
            if(time>temp) temp = time;
        }
    }else if(data[1] != 0 && data[i] == 100){ // จุดแค่ด้านปลาย ด้านต้นไม่จุด
        for(int j=0; j<i; j++){
            if(j==0){
                value = data[j+1]-0;
                time = value/10.0;
                if(time>temp) temp = time;
                continue;
            }
            value = data[j+1]-data[j];
            time = value/20.0;
            if(time>temp) temp = time;
        }
    }else{ // ไม่ได้จุดทั้งต้นและปลาย
        for(int j=0; j<i; j++){
            if(j==0){
                value = data[j+1]-0;
                time = value/10.0;
                if(time>temp) temp = time;
                continue;
            }
            if(j==(i-1)){
                value = 100-data[j];
                time = value/10.0;
                if(time>temp) temp = time;
            }
            value = data[j+1]-data[j];
            time = value/20.0;
            if(time>temp) temp = time;
        }
    }

    cout << "Burning completes in " << temp << " sec.";
    return 0;
}