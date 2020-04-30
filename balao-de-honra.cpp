#include <iostream>
#include <string>
using namespace std;
int main(){
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letra;
    cin>>letra;
    size_t posicao = alfabeto.find(letra);
    cout<<posicao+1<<endl;
return 0;
}
