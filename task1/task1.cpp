#include"mynum.h"
#include<iostream>
using namespace std;
int input()
{
	int num=0;
	cout << "Enter Positive or Negative Number: ";
	cin >> num;
	return num;
}
void display(int output){
	cout << output << endl;
}
int main(){
	mynum n1(input());
	display(n1.positivenumber());
	display(n1.negitivenumber());
	int obj=0;
	cout << " How many number you want enter : ";
	cin >> obj;
	while (true){
		if (obj > 0){
			break;
		}
		else{
			cin >> obj;
		}
	}
	mynum *objs = new mynum[obj];
	for (int i = 0; i < obj; i++){
		objs[i].numsetter(input());
	}
//display()
	for (int i = 0; i < obj; i++){
		display(objs[i].numgetter());
	}
	cout << "After sorting" << endl;
	int temp1 = 0;
	for (int i = 0; i < obj; i++){
		for (int j = i + 1; j < obj; j++){
			if (objs[i].numgetter()>objs[j].numgetter()){
				temp1 = objs[i].numgetter();
				objs[i].numsetter(objs[j].numgetter());
				objs[j].numsetter( temp1);
			}
		}
	}
	for (int i = 0; i < obj; i++){
		display(objs[i].numgetter());
	}
	return 0;
	
}