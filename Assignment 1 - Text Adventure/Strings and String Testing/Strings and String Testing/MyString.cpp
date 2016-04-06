#include "MyString.h"

MyString::MyString()
{
	m_string = new char[1];
	m_capacity = 1;
	m_size = 0;
	m_string[0] = 0;
}

MyString::MyString(const char * a)
{
	m_capacity = strlen(a) + 1;
	m_string = new char[m_capacity];
	m_size = m_capacity - 1;
	strcpy(m_string, a);
}

MyString::MyString(MyString & other)
{
	m_capacity = other.m_capacity;
	m_string = new char[m_capacity];
	m_size = other.m_size;
	strcpy(m_string, other.m_string);
}

MyString::MyString(int input)
{
	m_size = 0;
	m_capacity = input + 1;
	m_string = new char[m_capacity];
}

MyString::~MyString()
{
	delete[] m_string;
}

void MyString::operator=(MyString & other)
{
	if (!(m_capacity >= other.m_size))
	{
		resize(other.m_size + 1);
	}
	m_size = other.m_size;
	strcpy(m_string, other.m_string);
}

void MyString::operator=(char *other)
{
	if (!(m_capacity >= strlen(other) + 1))
	{
		resize(strlen(other) + 1);
	}
	m_size = strlen(other);
	strcpy(m_string, other);
}

void MyString::resize(int capacity)
{
	if (m_string != nullptr) {
		delete[] m_string;
	}
	m_string = new char[capacity];
	m_capacity = capacity;
}

MyString MyString::operator+(MyString & rhs)
{
	MyString temp(*this);
	temp += rhs;
	return temp;
}

MyString MyString::operator+(char * rhs)
{
	MyString temp(rhs);
	temp += rhs;
	return temp;
}

void MyString::operator+=(MyString & rhs)
{
	MyString temp(*this);
	if (!(m_capacity > rhs.m_size + m_size))
	{
		resize(rhs.m_size + m_size + 1);
	}
	strcpy(m_string, temp.m_string);
	m_size += rhs.m_size;
	strcat(m_string, rhs.m_string);
}

void MyString::operator+=(char * rhs)
{
	MyString temp(*this);
	if (!(m_capacity > strlen(rhs) + m_size))
	{
		resize(strlen(rhs) + m_size + 1);
	}
	strcpy(m_string, temp.m_string);
	m_size += strlen(rhs);
	strcat(m_string, rhs);
}

char * MyString::operator[](int index)
{
	if (m_size > index && index >= 0)
	{
		return &m_string[index];
	}
	else
	{
		return nullptr;
	}
}

bool MyString::operator==(const char* rhs)
{
	if (strcmp(m_string, rhs) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MyString::operator==(MyString & rhs)
{
	if (strcmp(m_string, rhs.m_string) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int MyString::length()
{
	return m_size;
}

MyString operator+(char * lhs, MyString rhs)
{
	MyString temp(lhs);
	temp += rhs;
	return temp;
}



MyString MyString::toLower()
{
	MyString temp(*this);
	for (int i = 0; i < m_size; i++)
	{
		*temp[i] = tolower(*temp[i]);
	}
	return temp;
}

MyString MyString::toUpper()
{
	MyString temp(*this);
	for (int i = 0; i < m_size; i++)
	{
		*temp[i] = toupper(*temp[i]);
	}
	return temp;
}

char * MyString::subString(char* str)
{
	return strstr(m_string, str);
}

char * MyString::subStringFromIndex(int index, char * str)
{
	if (m_size >= index && index >= 0)
	{
		return strstr(m_string + index, str);
	}
	else
	{
		return nullptr;
	}
}

void MyString::subStringReplace(char * str1, char * str2)
{
	char * p = subString(str1);
	if (p != nullptr)
	{
		MyString buffer;
		if (m_string == p)
		{
			buffer = str2;
			buffer += (p + strlen(str1));
		}
		else
		{
			int l = m_size - strlen(p);
			if (l >= 0)
			{
				buffer += *this;
				*buffer[l] = 0;
				buffer += str2;
				buffer += (p + strlen(str1));
			}
		}
		*this = buffer;
	}
}

MyString MyString::GetLine()
{
	char temp[256];
	std::cin.getline(temp, 256);
	*this = temp;
	return *this;
}
