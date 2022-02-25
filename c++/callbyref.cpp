#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int temp = a;
	a =b;
	b = temp;
}

int main(){
	int a=3,b=9;
	cout<<"before swap is"<<endl;
	cout<<"a is"<<a<<"b is"<<b<<endl;
	
	swap(a,b);
	
	cout<<"after swap"<<endl;
	cout<<"a is "<<a<<"b is"<<b<<endl;
	return 0;
}
