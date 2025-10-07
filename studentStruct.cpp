#include <iostream>
// #include <string>
#include <string.h>
#include <string>
enum days{
    MONDAY,TEUSDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY=90
};
struct student
{
    std::string name;
    int rollNo;
    std::string division;
};

int main(){
    student sahil;
    sahil.name="sahil\n";
    sahil.rollNo=57;
    sahil.division=3;
    std::cout<<sahil.name;
    enum days today=SUNDAY;
    std::cout<<today<<std::endl;
    int a=9;
    int &b=a;
    std::cout<<&b<<"\n";
    std::cout<<&a;
    // std::cout<<b*<<" now dereferencing a :"<<a*;

    // ignores the next line input buffer to get proper work of getline()
    // int age;
    // std::cout<<"enter your age : ";
    // std::cin>>age;
    // std::string name;
    // std::cout<<"enter your name : ";
    // std::cin.ignore();
    // // std::cin>>name;
    // getline(std::cin,name);
    // std::cout<<"hello!!,"<<name<<" and you are "<<age<<" years old"<<"\n";
    
    //dynamic Array
    int totalGuests;
    std::cout<<"enter the total number of guests : ";
    std::cin>>totalGuests;
    std::cin.ignore();
    std::string* guestList=new std::string[totalGuests];
    for(int i=0;i<totalGuests;i++){
        std::cout<<"enter the "<<i+1<<"th guest name : ";
        getline(std::cin,guestList[i]);
    }
    std::cout<<"\n";
    for(int i=0;i<totalGuests;i++){
        std::cout<<"name of your "<<i+1<<"th guest is : "<<guestList[i]<<std::endl;
    }
    return 0;
}