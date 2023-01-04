#include <iostream>
using namespace std;

int main(){
    int epizode, buyer, temp, couter, allcost=0;
    cin >> epizode >> buyer;
    int cost[epizode], ctcost[buyer];
    //*********loop value************ 
    for(int i=0; i<epizode; i++){
        cin >> cost[i];
        allcost += cost[i];
    }
    temp = allcost;
    
    for(int i=0; i<buyer; i++){
        cin >> ctcost[i];
    }
    //*******************************
    
    for(int i=0; i<buyer; i++){
        allcost = temp;
        for(int j=0; j<epizode; j++){
            allcost = allcost - cost[epizode-(j+1)];
            if(allcost <= ctcost[i]){
                cout << epizode-(j+1) << endl;
                break;
            }
        }
    }

    return 0;
}
