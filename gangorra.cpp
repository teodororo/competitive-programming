#include <iostream>
using namespace std; 
int main(){
    int x,y,z,w; 
    cin>>x>>y>>z>>w;
    if(x*y==z*w){
        cout<<"0"<<endl;
    }else{
        if((x*y)>(z*w)){
            cout<<"-1"<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
return 0;
}