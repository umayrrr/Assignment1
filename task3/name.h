#pragma once
class Name
{
private:
	char* firstName;
	char* lastName;
public:
	Name(char* first = nullptr, char* last = nullptr);
	Name(const Name&); 
	~Name();
	void copyName(Name&); 
	void setter(char *,char*);
	char firstnamegetter();
	char lastnamegetter();
	void firstnamecamelCase();
	void lastnamecamelCase();
	void firstnametoLower();
	void lastnametoLower();
	void firstnametoUpper();
	void lastnametoUpper();
	int nameLength(); 
	void swapNames();
	void display(); 
	char* fullName(); 
    bool isValidName();
};

