#include<iostream>
using namespace std;
void add(int x){
	cout<<"addition is"<<x<<endl;
}
void add(int x,int y){
	cout<<"addition is"<<x+y<<endl;
}
void add(int x,int y,int z){
	cout<<"addition is"<<x+y+z<<endl;
}

int main(){
	add(3);
	add(3,3);
	add(3,3,3);
	return 0;
}


