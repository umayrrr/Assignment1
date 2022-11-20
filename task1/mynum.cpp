#include "mynum.h"
#include<iostream>
using namespace std;

mynum::mynum(int i){
	numsetter(i);
}
void mynum::numsetter(int num){
	n = num;
}
int mynum::numgetter(){
	
	int temp = n;
	return temp;
}
int mynum::positivenumber(){
	int temp = 0;
	if (n < 0){
		temp = n*-1;
	}
	cout << " Positive Numbers: ";
	return temp;
}
int mynum::negitivenumber(){
	int temp = 0;
	if (n>0){
		temp = n*-1;
	}
	cout << " Negative Numbers: ";
	return temp;
}
