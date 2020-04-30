#include <bits/stdc++.h>
using namespace std;
int main(){
    int geral[2]={0,0};
    int x,i;
    cin>>x;
    for (i=0;i<x;i++){
        string letra;
        int n;
        cin>>letra;
        cin>>n;
        if(letra[0] == 'G'){
            geral[0] += n;
        }
        else if(letra[0] == 'V'){
            geral[1] +=n;
        }
    }
    if(geral[1] == 0 or geral[1] - geral[0]<0){
        cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
    }
    else if(geral[0] == 0 or geral[1] - geral[0]>0){
        cout<<"A greve vai parar."<<endl;
    }
    else if(geral[1]-geral[0] == 0){
        cout<<"A greve vai parar."<<endl;
    }
return 0;
}