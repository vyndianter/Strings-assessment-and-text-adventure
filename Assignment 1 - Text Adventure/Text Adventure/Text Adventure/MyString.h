#pragma once
#include <cstring>
#include <ctype.h>
#include <iostream>
#include <stdio.h>
class MyString
{
public:

	//Constructors and the relevant destructor
	MyString();
	MyString(const char* a);
	MyString(MyString& other);
	MyString(int input);
	~MyString();

	//defining operators
	void operator = (MyString & other); //equals
	void resize(int capacity); // used for resizing strings when needed
	MyString operator + (MyString& rhs); //prepend
	MyString operator + (char* rhs); //prepend
	void operator += (MyString& rhs); //prepend
	void operator += (char* rhs); //prepend
	char* operator [] (int index); //index
	bool operator == (const char* rhs); //equivalent too
	bool operator == (MyString& rhs); //equivalent too
	friend MyString operator + (char* lhs, MyString rhs); //append
	int length(); //String length

				  //C Style Input
	void operator = (char * other);
	operator const char*() { return m_string; }

	//Lowercase and Uppercase
	MyString toLower();
	MyString toUpper();

	//Sub String stuff
	char* subString(char* str); //finding the substring
	char* subStringFromIndex(int index, char* str); //Using the index to specify a substring
	void subStringReplace(char* str1, char* str2); //ultering the substring/ replacing the contents of the substring

	//c-style input
	MyString GetLine();

private:

	char* m_string;
	int m_capacity;
	int m_size;
};
