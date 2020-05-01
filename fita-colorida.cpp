#include <iostream>

using namespace std;

int main(){
    int INF = 99999; 
    int MAX = 10100;
    int x;
    cin>>x;

    //fitas com tamanho máximo para que o código não dê voltas 
    int fita[MAX], fita_direita[MAX], fita_esquerda[MAX];
    
    //INF ANTES e DEPOIS (por isso o i<=x+1)
    for(int i=0; i<=x+1; i++) fita_esquerda[i]=fita_direita[i]=INF;

    //leitura começando em 1 
    for(int i=1;i<=x;i++){
        cin>>fita[i];
    }

    //para a direita
    for(int i=1;i<=x;i++){
        if(fita[i]==0){
            fita_direita[i]=0;
        }else{
            fita_direita[i] = fita_direita[i-1]+1;
        }
    }

    //para a esquerda
    for(int i=x;i>0;i--){
        if(fita[i]==0){
            fita_esquerda[i]=0;
        }else{
            fita_esquerda[i] = fita_esquerda[i+1]+1; 
        }
    }

    //vetor final
    int fita_colorida[x];
    for(int i=1;i<=x;i++){
        if(fita_esquerda[i]<=fita_direita[i]){
            fita_colorida[i] = fita_esquerda[i];
        }else{
            fita_colorida[i] = fita_direita[i]; 
        }
    }

    //ajeitando os noves
    for(int i=1;i<=x;i++){
        if(fita_colorida[i]>9){
            fita_colorida[i] = 9;
        }
    }

    //imprimindo
    cout<<"\n";
    for(int i=1;i<=x;i++){
        cout<<fita_colorida[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}