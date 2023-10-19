#include<iostream>
using namespace std;
int main(){
	int n;
	int sum=0;
	while(1){
	cout<<"Enter a number :";
	cin>>n;
	if(n>0){
		sum=sum+n;
	}
	else{
		break;
	}
}
cout<<"\nSum of numbers"<<sum;
return 0;
}
