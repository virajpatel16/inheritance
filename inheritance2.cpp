/*2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() 
*/


//inheritance
#include<iostream>
using namespace std;

class p{
	
public:
	int C=12;
	int F=22;

	
	
	public:
		void formula(){
			cout<<"enter the formula:"<<C<<F<<endl;
	        	 C= F-32*5/9;
		}
	
	
};


class q:public p{


public:
	void formula1(){
		cout<<"enter the formula1:"<<C<<F<<endl;
		F = C *9/5 + 32;
	}

};

class r : public q{
	int K=10;
	int y=20;
	public:
	  
	  void formula2(){
		cout<<"enter the formula1:"<<C<<F<<K<<y<<endl;
	
	K = (y *F + 459.67) * 5/9;
}
};
main(){
	
	r obj;
	obj.formula();
	obj.formula1();
	obj.formula2();
}

    


