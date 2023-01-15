#include<iostream>
using namespace std;
//a simple program to demonstrate classes.
class Millitary
    {
        int gdp;
        int powerindex;
        public:
            void setstuff(int,int);
            int totalpower()
            {
                return (gdp*powerindex);
            }
    };
void Millitary::setstuff(int a, int b){
    gdp=a;
    powerindex=b;
}
int main()
{
    Millitary M1,M2;
    M1.setstuff(2000,89);
    M2.setstuff(14000,98);
    cout<<"power of country 1:"<<M1.totalpower()<<endl;
    cout<<"power of country 2:"<<M2.totalpower()<<endl;
    return 0;
}
