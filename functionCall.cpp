#include <iostream>
bool isEven(int num){
    int remainder=num%2;
    if(remainder==0){
        return true;
    }else{
        return false;
    }
}
void fun(long long x,int i){
    if(i==62){
        return;
    }
    std::cout<<i<<"th value : "<<x*2<<"\n";
    fun(x*2,i+1);
}
int main(){
    int num;
    std::cout<<"enter the number";
    std::cin>>num;
    bool result=isEven(num);
    if(result){
        std::cout<<"Your entered number is an Even Number\n";
    }
    else{
        std::cout<<"your entered number is an Ood number\n";
    }
    fun(2,1);
    return 0;
}