#include<iostream>
using namespace std;

class c
{
public:
int input1;
int input2;

void setinput(int a,int b)
{
input1 = a;
input2 = b;
}
int add();
/*
{
return input1+input2;
}
*/
int sub()
{
return input1-input2;
}
int mul()
{
return input1*input2;
}
int div()
{
return input1/input2;
}
};
int c::add(){
c ob 1;
ob1.setinput(10,2);

cout<<"This is input:"<<ob1.input1<<""<<ob1.input2<<endl;
cout<<"Please select operation\n1.sum\n2.sub\n3.mul\n4.div"<<endl;
int i;
cin>>i;
switch(i)
{
case 1:
{
cout<<"The sum of inputs is :"<<ob1.add()<<endl;
break;
}

case 2:
{
cout<<"The sub of inputs is :"<<ob1.sub()<<endl;
break;
}

case 3:
{
cout<<"The mul of inputs is :"<<ob1.mul()<<endl;
break;
}

case 4:
{
cout<<"The div of inputs is :"<<ob1.div()<<endl;
break;
}

default:
cout<<"error"<<endl;
}
return 0;
}

