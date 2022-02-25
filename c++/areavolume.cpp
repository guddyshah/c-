#include<iostream>
using namespace std;
class measure{
public:
float h,l,w;
void setInput(float a,float b,float c){
h = a;
l = b;
w = c;
}
float area(){
return w*l;
}
float volume(){
return w*l*h;
}
};

int main(){
measure obj1;
float n1,n2,n3;
cout<<"enter hight lwngth and width\n";
cin>>n1>>n2>>n3;
obj1.setInput(n1,n2,n3);
cout<<"area is :\n"<<obj1.area();
cout<<"volume is: \n"<<obj1.volume();
return 0;
}
