#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int vetor[x];
    for(int i=0;i<x;i++){
        cin>>vetor[i];
    }
    //clone 
    int vetornovo[x];
    for(int i=0;i<x;i++){
        vetornovo[i]=vetor[i];
    }
    for(int j=0;j<x;j++){
        if(vetor[j]==1){
            if(j==0){
                vetornovo[(j+1)]++;
            }else if(j==(x-1)){
                vetornovo[(j-1)]++;
            }else{
                vetornovo[(j-1)]++;
                vetornovo[(j+1)]++;
            }
        }
    }
    for(int z=0;z<x;z++){
        cout<<vetornovo[z];
    }
    return 0;
}