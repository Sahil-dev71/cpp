#include <iostream>
using namespace std;
int main(){
    int maxStar=5;
    for(int i=0;i<maxStar;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        int j=0;
        while(j< 2*(maxStar-i)){
            cout<<" ";
            j++;
        }

         for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=maxStar;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        int j=0;
        while(j< 2*(maxStar-i)){
            cout<<" ";
            j++;
        }

         for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}