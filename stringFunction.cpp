#include <iostream>
#include <string>
using namespace std;
int main(){
    // string firstName="Sahil";
    // string lastName="Gupta";
    // // string fullName=firstName+" "+lastName;
    // string fullName= firstName.append(lastName);
    // cout<<fullName<<"\n";
    // // cout<<fullName[7];
    // cout<<fullName.at(6);
    // cout<<fullName.at(fullName.length()-1); // uses when we have to find the char from last
    // string sentence="hello world !! it's \"sahil\" here."; // always use backslash when you have to use ",' etc.
    // cout<<sentence;

    // Taking string as input
    // string userName;
    // cout<<"enter your name here : ";
    // cin>>userName; // it takes only first word from input , it takes whitespace and tab as a terminating statement
    
    // to take whole line as a input use this
    //getline() is a function which comes with string header file
    // getline(cin,userName);
    // cout<<"your entered name is : "<<userName<<"\n";
    
    //using boolalpha
    bool isYou=true;
    cout<<isYou<<"\n";
    cout<<"from now , boolalpha is applicable : "<< boolalpha<<isYou;
    cout<<"\nfrom now, boolalpha is removed "<<noboolalpha<<isYou<<endl;

    // switch case testing : is default executed if break is not there 
    int din;
    cout<<"enter the day number : ";
    cin>>din;
    switch (din)
    {
    case 1:
        cout<<"it's Monday \n";
        break;
    case 2:
        cout<<"it's Tuesday\n";
        break;
    case 3:
        cout<<"it's wednesday\n";
        break;
    default:
        cout<<"its the default value which i wanted to test\n";
        // break;
    }
    return 0;
}