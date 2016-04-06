#include <fstream>
#include"MyString.h"

//testing of the strings
void test(bool expression, float& successful, float& failure, char* strName, std::ofstream& output)
{
	if (expression)
	{
		successful++;
		output << "test " << successful + failure << '\t' << strName << '\t' << "Test Successful!" << '\n';
	}
	else
	{
		failure++;
		output << "test " << successful + failure << '\t' << strName << '\t' << "Test Failed!" << '\n';
	}
}


int main()
{
	//opening the file and setting some variables/ creating strings
	std::ofstream file;
	file.open("String Testing.txt", std::ofstream::out | std::ofstream::app);
	float successful = 0.0f;
	float failure = 0.0f;
	MyString Braum = "Braum, the Big Buff Man";
	MyString Bob = "Bob";
	//testing phase
	test(strcmp(Braum, "Braum, the Big Buff Man") == 0, successful, failure, "Constructor\t\t\t\t\t", file);
	test(Braum == "Braum, the Big Buff Man", successful, failure, "Compare (true)\t\t\t\t\t", file);
	test(!(Braum == "Braum, the Big Buff Man9h"), successful, failure, "Compare (false)\t\t\t\t\t", file);
	test(Braum.length() == 23, successful, failure, "length\t\t\t\t\t\t", file);
	test(*Braum[6] == ' ', successful, failure, "Index\t\t\t\t\t\t", file);
	Braum += Bob;
	test(Braum == "Braum, the Big Buff ManBob", successful, failure, "Append\t\t\t\t\t\t", file);
	Braum = "Braum, the Big Buff Man";
	Braum = Bob + Braum;
	test(Braum == "BobBraum, the Big Buff Man", successful, failure, "Prepend\t\t\t\t\t\t", file);
	Braum = "Braum, the Big Buff Man";
	test(Braum.toLower() == "braum, the big buff man", successful, failure, "All Upper Case\t\t\t\t\t", file);
	test(Braum.toUpper() == "BRAUM, THE BIG BUFF MAN", successful, failure, "All Lower Case\t\t\t\t\t", file);
	test(Braum.subString("Big") != nullptr, successful, failure, "Finding a SubString\t\t\t\t", file);
	test(Braum.subStringFromIndex(6, "Big") != nullptr, successful, failure, "Finding a SubString from a certain index (True)\t", file);
	test(Braum.subStringFromIndex(7, "Braum") == nullptr, successful, failure, "Finding a SubString from a certain index (False)", file);
	Braum.subStringReplace("Big", "Small");
	test(Braum == "Braum, the Small Buff Man", successful, failure, "Replacing a SubString\t\t\t\t", file);
	Braum += Braum;
	//finding the average and printing it underneath the tests
	float average = (successful / (successful + failure)) * 100;
	file << "Successful " << average << "% of the time" << "\n\n\n\n";
	file.close();


	return 0;
}
