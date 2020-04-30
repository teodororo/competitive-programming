#include <iostream>
using namespace std; 
int main(){
    int vezes;
    cin>>vezes;
    int ant=0, atual=0, pontosanterior=1,pontos=1;
    cin>>ant;
    atual = ant;
    for(int i=1;i<vezes;i++){
        cin>>atual;
        if(ant == atual){
            pontos++;
        }else{
            ant = atual;
            if(pontosanterior<pontos){
                pontosanterior = pontos;
            }
            pontos = 1; 
        }
    }
    if(pontos<pontosanterior){
         cout<<pontosanterior;
    }else{
        cout<<pontos;
    }
   
return 0;
} 