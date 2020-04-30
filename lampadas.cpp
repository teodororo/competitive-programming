#include <iostream>
using namespace std; 
int main(){
    int a = -1, b = -1; //desligados 
    int vezes,x;
    cin>>vezes; 
    for(int i=0;i<vezes;i++){
        cin>>x;
        if(x==1){
            a = -a;
        }else{
            a = -a;
            b = -b;
        }
    }
    //como -1 é a mesma coisa que zero 
    if(a==-1 || b==-1){
        if(a==-1 and b==1){
            a = 0;
        }else if(a==1 and b==-1){
            b = 0;
        }else{
            a = 0;
            b = 0;
        }
    }
    cout<<a<<"\n"<<b<<endl;
return 0;
}