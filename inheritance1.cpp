/*1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods*/

//inheritance
#include<iostream>

using namespace std;

class add{
	public:
	int a;
	int b;
	int c;
	int cube ;
	int i;
	int j;
	
	void fun(){
	cout<<"cube"<<a*a*a<<endl;
	cout<<"i"<<b*b*b<<endl;
	cout<<"j"<<c*c*c<<endl;
}
	
};

class data : public add{
	public:
	void set(){
		
		cout<<"enter the a:"<<endl;
		cin>>a;
		
		cout<<"enter the b :"<<endl;
		cin>>b;
		
	
		cout<<"enter the c:"<<endl;
		cin>>c;
		
		
		
	
	}
	void get(){
		
		cout<<"your the a:"<<endl;
		cin>>a;
		cout<<"your the b :"<<endl;
		cin>>b;
		cout<<"your the c:"<<endl;
		cin>>c;
		
			
	}
	
};
main(){
	
	data d;
d.get();
d.set();
d.fun();
	
}	


    
