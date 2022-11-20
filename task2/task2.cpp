#include"mychar.h"
#include<iostream>
using namespace std;
char input() {
	char a;
	cout << "Enter any character: ";
	cin >> a;
	while (true) {
		if (a >=97&&a<=122||a>=65&& a<=90) {
			break;
		}
		else {
			cout << "Incorrect!!! try again:"<<endl;
			cout << "Enter Alphabets: ";
			cin >> a;
		}
	}

	return a;
}
void display(char output) {
	cout <<"Data:"<< output << endl;
}
int main() {
	mychar c1(input());
	display(c1.lowercase());
	display(c1.uppercase());
	int N;
	cout << endl<< "Enter how many character you want to enter: ";
	cin >> N;
	while (true) {
		if (N > 0) {
			break;
		}
		else {
			cout << "Incorrect!!! try again:";
			cin >> N;
		}
	}
	mychar* n = new mychar[N];
	for (int i = 0; i < N; i++) {
		n[i].setter(input());
	}
	cout << "Before conversion: " << endl;
	for (int i = 0; i < N; i++) {
		display(n[i].getter());
	}
	for (int i = 0; i < N; i++) {
		if (n[i].getter() >= 65 && n[i].getter() <= 90) {
			n[i].uppercase();
		}
		else
			n[i].lowercase();
	}
	cout << "After conversion: " << endl;
	for (int i = 0; i < N; i++) {
		display(n[i].getter());
	}
	//do sorting here
	char temp1;
	for (int i = 0; i < N; i++) {
		for(int j=i+1;j<N;j++){
			if (n[i].getter() > n[j].getter()) {
				temp1 = n[i].getter();
				n[i].setter(n[j].getter());
				n[j].setter(temp1);
			}
		}
	}
	cout << "After sorting:" << endl;
	for (int i = 0; i < N; i++) {
		display(n[i].getter());
	}
	return 0;
}
