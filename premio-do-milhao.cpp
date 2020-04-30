#include <iostream>
using namespace std; 
int main(){
    int i=0, vezes,contagem,acum=0,dias=0; 
    cin>>vezes;
    while(i<vezes){
        if(acum>=1000000){
            break;
        }
        cin>>contagem; 
        acum+= contagem;
        dias++; 
    }
    cout<<dias; 
return 0;
}