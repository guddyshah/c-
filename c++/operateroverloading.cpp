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
		cout<<"real = "<<real<<endl<<"imaginary ="<<img<<endl;
	}
//Overloading//
	complex operator +(complex ob){
		complex temp;
		temp.real = real + ob.real;
		temp.img = img + ob.img;
		return temp;
	}
	complex operator -(complex ob){
		complex temp;
		temp.real = real - ob.real;
		temp.img = img - ob.img;
		return temp;
	}
	complex operator *(complex ob){
		complex temp;
		temp.real = real * ob.real;
		temp.img = img * ob.img;
		return temp;
	}
	complex operator /(complex ob){
		complex temp;
		temp.real = real / ob.real;
		temp.img = img / ob.img;
		return temp;
	}
	complex operator %(complex ob){
		complex temp;
		temp.real = real % ob.real;
		temp.img = img % ob.img;
		return temp;
	}
	complex operator++ (){
		complex temp;
		temp.real = ++real;
		temp.img = ++img;
		return temp;
	}
	complex operator-- (){
		complex temp;
		temp.real = --real;
		temp.img = --img;
		return temp;
	}
	complex operator &&(complex ob){
		complex temp;
		temp.real = real && ob.real;
		temp.img = img && ob.img;
		return temp;
	}
	complex operator ||(complex ob){
		complex temp;
		temp.real = real || ob.real;
		temp.img = img || ob.img;
		return temp;
	}
	complex operator <(complex ob){
		complex temp;
		temp.real = real < ob.real;
		temp.img = img < ob.img;
		return temp;
	}
	complex operator >(complex ob){
		complex temp;
		temp.real = real > ob.real;
		temp.img = img > ob.img;
		return temp;
	}
};

int main(){
	complex c1(3,9),c2(4,16);
	complex c3;
	c1.display();
	c2.display();
	c3.display();
	cout<<"start from here"<<endl;
	cout<<"1.add"<<endl;
	c3 = c1.operator+(c2);
	c3.display();
	cout<<"2.sub"<<endl;
	c3 = c1.operator-(c2);
	c3.display();
	cout<<"3.multiplication"<<endl;
	c3 = c1.operator*(c2);
	c3.display();
	cout<<"4.dividion"<<endl;
	c3 = c1.operator/(c2);
	c3.display();
	cout<<"5.modulo"<<endl;
	c3 = c1.operator%(c2);
	c3.display();
	cout<<"6.increment c1"<<endl;
	++c1;
	c1.display();
	cout<<"7.decrement in c2"<<endl;
	--c2;
	c2.display();
	cout<<"8.logical and"<<endl;
	c3 = c1.operator&&(c2);
	c3.display();
	cout<<"9.logical or"<<endl;
	c3 = c1.operator||(c2);
	c3.display();
	cout<<"10.less than"<<endl;
	c3 = c1.operator<(c2);
	c3.display();
	cout<<"11.greater than"<<endl;
	c3 = c1.operator>(c2);
	c3.display();
	return 0;
}
	
