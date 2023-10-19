#include<iostream>
using namespace std;
int main(){
	int i,n;
	cout<<"Enter a number :";
	cin>>n;
	int fact=1;
	for(i=1;i<=n;i++){
	fact=fact*i;
	}
	cout<<"\nThe factorial of a number is :"<<fact;
	return 0;
}
