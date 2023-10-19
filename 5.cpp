#include<iostream>
using namespace std;
int main(){
	int i;
	int n;
	cout<<"Enter a number  :";
	cin>>n;
	cout<<"\nThe factor of number is ";
	for(i=1;i<=n;i++){
		if(n%i==0)
		cout<<" "<<i;
	
	}
	return 0;
}
