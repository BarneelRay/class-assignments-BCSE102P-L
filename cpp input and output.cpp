#include<iostream>
using namespace std;

int main()
{
    int a;
    char b;
    double c;
    float d;
    int array_to_show[10];
    //except this modifiers such as short, long , unsigned may also be used , C++ also supports long long
    cout<<"enter the integer:\n";
    cin>>a;
    cout<<"enter the character:\n";
    cin>>b;
    cout<<"enter the double:\n";
    cin>>c;
    cout<<"enter float:\n";
    cin>>d;
    cout<<endl;
    cout<<"lets see the output values now\t"<<endl;
    cout<<"integer\t"<<a<<"\n"<<"character\t"<<b<<"\n"<<"double\t"<<c<<endl;
    cout<<"float\t"<<d<<endl;
    cout<<"\n\nnow we go for filling the array"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"enter the "<<i+1<<"th value:"<<endl;
        cin>>array_to_show[i];
    }
    cout<<"lets get the array now"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<array_to_show[i]<<"\t";
    }
    cout<<"\nthanks";
}
