#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a= 3,b = 4;
	cout<<"before swaping"<<endl;
	cout<<"a is "<<a<<"b is "<<b<<endl;
	
	swap(&a,&b);
	cout<<"after swaping"<<endl;
	cout<<"a is "<<a<<"b is"<<b<<endl;
	return 0;
}
