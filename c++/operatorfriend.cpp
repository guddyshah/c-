#include<iostream>
using namespace std;
class complex{
	int real,img;
	public:
	complex(){
		real = 0;
		img = 0;
	}
	complex(int x,int y){
		real = x;
		img = y;
	}
	void display(){
		cout<<"real = "<<real<<"imaginary is ="<<img<<endl;
	}
//Friend Overloading//
	friend complex operator +(complex ob1,complex ob2);
	friend complex operator -(complex ob1,complex ob2);
	friend complex operator *(complex ob1,complex ob2);
	friend complex operator /(complex ob1,complex ob2);
};
complex operator +(complex ob,complex ob1){
	complex temp;
	temp.real = ob1.real+ob.real;
	temp.img = ob1.img+ob.img;
	return temp;
}

complex operator -(complex ob,complex ob1){
	complex temp;
	temp.real = ob1.real-ob.real;
	temp.img = ob1.img-ob.img;
	return temp;
}

complex operator *(complex ob,complex ob1){
	complex temp;
	temp.real = ob1.real*ob.real;
	temp.img = ob1.img*ob.img;
	return temp;
}

complex operator /(complex ob,complex ob1){
	complex temp;
	temp.real = ob1.real/ob.real;
	temp.img = ob1.img/ob.img;
	return temp;
}

int main(){
	complex c1(3,9),c2(4,16),c3;
	c1.display();
	c2.display();
	c3.display();
	cout<<"start from here"<<endl;
	cout<<"1.for add"<<endl;
	c3 = c1+c2;
	c3.display();
	cout<<"2.for sub"<<endl;
	c3 = c1-c2;
	c3.display();
	cout<<"3.for mul"<<endl;
	c3 = c1*c2;
	c3.display();
	cout<<"4. for division"<<endl;
	c3 = c1/c2;
	c3.display();
	return 0;
}
	
