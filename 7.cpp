//7. Write a menu driven program to do following operations :
//a) Compute area of circle
//b) Compute area of rectangle
//c) Compute area of triangle
//d) Exit
//Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
//operation. Continue this process until user selects exit option.

#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char ch;
	int radius,length, breadth, height,base;
	while(1){
		cout<<"\n\na) Compute area of circle\nb) Compute area of rectangle\nc) Compute area of triangle\nd) Exit";
		cout<<"\nYou have to enter the options (a to d) :";
		cin>>ch;
		switch(ch){
			case 'a':
				cout<<"\nEnter the radius of circle: ";
				cin>>radius;
				cout<<"\nThe area of circle is :"<<(float)3.14*radius*radius;
				break;
			case 'b':
				cout<<"\nEnter the length and breadth of rectangle :";
				cin>>length>>breadth;
				cout<<"\nThe area of rectangle is :"<<length*breadth;
				break;
			case 'c':
				cout<<"\nEnter the height and base of triangle :";
				cin>>height>>base;
				cout<<"\nThe area of triangle is :"<<0.5*height*base;
				break;
			case 'd':
				exit(0);
				break;
			default:
				cout<<"\n\nEnter the correct options";
		}	
	}
	
	getch();
	return 0;
}
