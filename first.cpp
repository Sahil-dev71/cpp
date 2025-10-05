#include <iostream>
using namespace std;
int main(){
    int a;
    a=67;
    string name ="sahil";
    char b='B';
    double c=4.5;
    // cout<<name,b,c;
    // end1: it's slow cause it clears it flushes out the output buffer than it shows the output
    cout<< name<<endl<<b<<endl<<c<<endl;
    cout<<a<<"\n";
    return 0;
}