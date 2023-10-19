//1 to n prime number
#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n==1 || n==0){
		return false;
	}
	
	
		for(int j=2;j<=n/2;j++){
			if(n%j==0){
			return false;
			
			}
		
		}
		return true;
}
int main(){
	int n ;
	int count=0;
	cout<<"Enter the value of n :";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(isPrime(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}
