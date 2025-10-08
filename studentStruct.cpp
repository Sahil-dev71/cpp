#include <iostream>
#include<limits>
// #include <string>
#include <string.h>
#include <string>
enum days
{
    MONDAY,
    TEUSDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY = 90
};
struct student
{
    std::string name;
    int rollNo;
    std::string division;
};

int main()
{
    student sahil;
    sahil.name = "sahil\n";
    sahil.rollNo = 57;
    sahil.division = 3;
    std::cout << sahil.name;
    enum days today = SUNDAY;
    std::cout << today << std::endl;
    int a = 9;
    int &b = a;
    std::cout << &b << "\n";
    std::cout << &a;
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

    // dynamic Array
    int totalGuests;
    std::cout << "enter the total number of guests : ";
    std::cin >> totalGuests;
    if (std::cin.fail())
    {
        std::cout << "you must have to enter a number : ";
        std::cin.clear();

        //--- without c.ignore() input buffer is still contains the value of previous which would be taken by the getline()
        // std::cin.ignore('\n'); this will ignore only 10 character cuz ascii value of '\n' is 10 so here it does't stand for new
        
        std::cout<<"max size of input buffer : "<<(std::numeric_limits<std::streamsize>::max())<<std::endl;
        std::cin.ignore(std::numeric_limits<int>::max(),'\n');
        std::cout << "enter the number of guests again : ";
        std::cin >> totalGuests;
    }
    std::cin.ignore();
    std::string names[3] = {"sahil", "aditya", "jay"};
    std::string *guestList = new std::string[totalGuests];
    for (int i = 0; i < totalGuests; i++)
    {
        std::cout << "enter the " << i + 1 << "th guest name : ";
        getline(std::cin, guestList[i]);
    }
    std::cout << "\n";
    // std::cout<<"size of original array : "<<sizeof(names)/sizeof(names[0])<<"\n";
    std::cout << "size of string is : " << sizeof(names[0]) << "\n";
    std::cout << sizeof(*guestList) << std::endl;
    std::cout << "size of pointer is : " << sizeof(guestList) << std::endl;
    std::cout << "size of single guest name is : " << sizeof(guestList) / sizeof(guestList[0]) << std::endl;
    for (int i = 0; i < totalGuests; i++)
    {
        std::cout << "name of your " << i + 1 << "th guest is : " << guestList[i] << std::endl;
    }
    delete[] guestList;
    return 0;
}