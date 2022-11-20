#include "name.h"
#include<iostream>
using namespace std;
void Name::setter(char *n1,char *n2)
{
	int length = 0;

	for (int i = 0; firstName[i] != '\0'; i++) {
		length++;
	}

	char* temp = new char[length];
	for (int i = 0; i < length; i++) {
		firstName[i]=n1[i];

	}
	int length = 0;

	for (int i = 0; lastName[i] != '\0'; i++) {
		length++;
	}

	char* temp = new char[length];
	for (int i = 0; i < length; i++) {
		lastName[i] = n2[i];

	}
	 
}
char Name::firstnamegetter() {
	int length = 0;
	
	for (int i = 0;firstName[i]!='\0'; i++) {
		length++;
	}
	
	char* temp = new char[length ];
	for (int i = 0; i<length; i++) {
		temp[i] = firstName[i];

	}
	return *temp;

}
char Name::lastnamegetter(){
	int length = 0;
	for (int i = 0; lastName[i] != '\0'; i++) {
		length++;
	}
	char* temp = new char[length];
	for (int i = 0; i < length; i++) {
		temp[i] = lastName[i];

	}
	return *temp;
	delete[]temp;
	
}
void Name::firstnamecamelCase() {
	int i = 0;
	while (true) {
		if (firstName[0] >= 97 && firstName[0] <= 122) {
			firstName[0] = firstName[0] - 32;
		}
	}
}
void Name::lastnamecamelCase() {
	int i = 0;
	while (true) {
		if (lastName[0] >= 97 && lastName[0] <= 122) {
			lastName[0] = lastName[0] - 32;
		}
	}
}
void Name::firstnametoLower() {
	for (int i = 0; firstName[i] != '\0'; i++) {
		if (firstName[i] >= 65 && firstName[i] <= 90) {
			firstName[i] = firstName[i] - 32;
		}
	}
}
void Name::lastnametoLower() {
	for (int i = 0; lastName[i] != '\0'; i++) {
		if (lastName[i] >= 65 && lastName[i] <= 90) {
			lastName[i] = lastName[i] - 32;
		}
	}
}
void Name::firstnametoUpper() {
	for (int i = 0; firstName[i] != '\0'; i++) {
		if (firstName[i] >= 97 && firstName[i] <= 122) {
			firstName[i] = firstName[i] + 32;
		}
	}
}
void Name::lastnametoUpper() {
	for (int i = 0; lastName[i] != '\0'; i++) {
		if (lastName[i] >= 97 && lastName[i] <= 122) {
			lastName[i] = lastName[i] + 32;
		}
	}
}
int Name::nameLength() {
	int length = 0;
	for (int i = 0; firstName[i] != '\0'; i++) {
		length++;
	}
	for (int i = 0; lastName[i] != '\0'; i++) {
		length++;
	}
	length++;
	return length;
}
void Name::swapNames() {
	int length = 0;

	for (int i = 0; firstName[i] != '\0'; i++) {
		length++;
	}
	
	char* temp = new char[length];
	for (int i = 0; i < length; i++) {
		temp [i] = firstName[i];
		lastName[i] = firstName[i];
	}
	delete firstName;
	int length1 = 0;
	for (int i = 0; lastName[i] != '\0'; i++) {
		length1++;
	}
	length1++;
	char* firstName = new char[length1];
	for (int i = 0; i < length1; i++) {
		firstName[i] = lastName[i];
	}
	delete lastName;
}
void Name::display() {
	cout << " Name : " << firstName << " " << lastName<<endl;
}
