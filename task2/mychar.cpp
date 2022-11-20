#include<iostream>
#include"mychar.h"
using namespace std;
mychar::mychar(char a) {
	setter(a);
}
void mychar::setter(char c) {
	ch = c;
}
char mychar::getter() {
	return ch;
}
char mychar::uppercase() {
	if (ch >= 65 && ch <= 90) {
		ch= char(int(ch) + 32);
	}
	return ch;
}
char mychar::lowercase() {
	if (ch >= 97 && ch <= 122) {
		ch= char(int(ch) - 32);
	}
	return ch;
}