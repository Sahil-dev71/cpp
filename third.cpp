#include<iostream>
// #include<string>
int main(){
    int arr[3]={6,7,8};
    for(int i:arr){ 
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    //string is also comes with namespace library
    std::string myName="Sahil";
    for(char i:myName){
        std::cout<<i<<" ";
    }
    return 0;
}