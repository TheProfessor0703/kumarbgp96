#include<iostream>
using namespace std;
int main(){
	int a,b;
	int temp;
	cout<<"Enter two numbers :";
	cin>>a>>b;
	for(int i=1;i<a && i<b;i++){
	if(a%i==0 && b%i==0)
	temp=i;
	}
	cout<<"\nGCD of two numbers is :"<<temp;
	return 0;
}
