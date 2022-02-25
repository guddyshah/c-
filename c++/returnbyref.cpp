#include<iostream>
using namespace std;

int &max(int &a,int &b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	int a,b,ans;
	cout<<"enter a and b"<<endl;
	cin>>a>>b;
	ans = max(a,b);
	cout<<"greater number is"<<ans<<endl;
	return 0;
}


