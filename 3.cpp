#include<iostream>
using namespace std;
int main(){
	int n;
	char ch;
	cout<<"Enter a character :";
	cin>>ch;
	cout<<"\nEnter a number    :";
	cin>>n;
	for(int i=0;i<n;i++){
		ch++;
		cout<<"Next character is :"<<ch<<endl;
	}
	return 0;
	
}
