#include <iostream>
using namespace std;
int main(){
    while(true){
        int bancos, vezes;
        cin>>bancos>>vezes;
        if(bancos==0 and vezes==0){
            break;
        }else{
            int reserva[bancos];
            for(int i=0;i<bancos;i++){
                cin>>reserva[i];
            }
            int devedor,credor,valor;
            for(int i=0;i<vezes;i++){
                cin>>devedor>>credor>>valor;
                reserva[devedor-1] = reserva[devedor-1] - valor; 
                reserva[credor-1] = reserva[credor-1] + valor; 
            }
            //checagem 
            int pontos=0;
            for(int i=0;i<bancos;i++){
                if(reserva[i]<0){
                    pontos++;
                }
            }
            if(pontos!=0){
                cout<<"N"<<"\n";
            }else{
                cout<<"S"<<"\n";
            }
        }

    }
    return 0;
}