
//a demo program for private and derived classes.
// private members demo
// derived class demo
//CREDITS PROF. SUBBULAKSHMI T. 
//THANK YOU MAAM.
# include<iostream>

using namespace std;

class Base
{
	
	public :   
		int test_private = 10;	
	public: 
		int testFunction_public()
		{
			cout<<"In Base Class, Value of Private variable: " << test_private << "\n" ; 			
		}
		
};


class DerivedClass :  Base 
{
	int test1_private = 20;
	public :
		int testFunction1_public()
		{					
			cout << "In derived class public function \n ";			
			cout<<"In Derived Class, Value of Base class variable: \n" << test_private  << "\n"; 
			cout<<"In Derived Class, Value of Derived class variable:" << test1_private << "\n"  ; 
			
		}		
};

int main()
{
	Base obj1, obj2;
	DerivedClass obj3,obj4;
	obj1.testFunction_public();
	obj2.testFunction_public();
	//obj3.testFunction_public();
	//obj4.testFunction_public();
	obj3.testFunction1_public();
	obj4.testFunction1_public();
	
	cout << "All done \n";  
}
