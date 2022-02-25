#include<iostream>
using namespace std;

class calculator{
public:
float i1,i2;
void setInput(float a,float b){
i1 = a;
i2 = b;
}
float add(){
return i1+i2;
}
float sub(){
return i1-i2;
}
float mul(){
return i1*i2;
}
float div(){
return i1/i2;
}
};

int main(){
calculator obj1;
float n1,n2;
char op;

cout<<"enter two numbers :\n";
cin>>n1>>n2;
cout<<"enter operation: \n";
obj1.setInput(n1,n2);
cin>>op;
switch(op){

case '+':
cout<<"addition is"<<obj1.add();
break;

case '-':
cout<<"subtraction is"<<obj1.sub();
break;

case '*':
cout<<"multiplication is"<<obj1.mul();
break;

case '/':
cout<<"division is"<<obj1.div();
break;

default:
cout<<"invalid";
break;

}
return 0;
}


