#include<iostream>
using namespace std;

class calculator{

public:
int input1;
int input2;

void setInput(int a, int b){
input1 = a;
input2 = b;
}
int add(){
return input1+input2;
}

};

int main(){

calculator obj1;
obj1.setInput(10,2);
cout << "The inputs:" << obj1.input1<< "" <<obj1.input2<<endl;
cout << "The sum of inputs is:"<< obj1.add();
return 0;
}
