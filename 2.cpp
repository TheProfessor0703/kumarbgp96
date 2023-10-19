#include<iostream>
using namespace std;
int main(){
	int x,n;
	int i=1;
	int temp=1;
	cout<<"Enter the number :";
	cin>>x;
	cout<<"\nEnter the power :";
	cin>>n;
	while(i<=n){
		temp=temp*x;
		i++;
	}
	cout<<"\nThe value of x to power n :"<<temp;
	return 0;
}
