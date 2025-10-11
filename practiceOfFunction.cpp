#include <iostream>
#include <functional>
#include<stdio.h>

void multiply(std::function<void()> func){
        func();
        func();
    }
struct phone{
    int RAM;
    std::string model;
};
void structPhone(phone p={4,"samsung galaxy"}){
    std::cout<<"Model : "<<p.model<<"\nRAM of phone : "<<p.RAM<<"GB\n";
}
int main(){
  
    phone s20={16,"samsung s24"};
    structPhone(s20);
    auto funct=[](phone p){
        std::cout<<"model : \n";
    };
    multiply([&](){
        funct(s20);
    });
    // multiply(funct(s20)); // this calls the lambda function immediately and returns void but multiply expects a function
    return 0;
}