#include <iostream>
using namespace std;
int main(){
    const int marks=66;
    // this type of declaration of const is not a valid syntax
    // const int marks;
    // marks=89;
    int a,b;

    // cout<<"enter two numbers which you would like to add \n";
    // cin>>a>>b;
    // cout<<"total sum of your entered number is :"<<a+b << endl;
    // float num=4;
    
    double num=90;
    cout<<"double : "<<num<<endl;
    bool isNum=true;
    cout<<+isNum; // type conversion is also supported in this lang
    char ascii=78;
    cout<< "\nchar of 78 : "<<ascii; // means we can use ascii for characters
    return 0;
}