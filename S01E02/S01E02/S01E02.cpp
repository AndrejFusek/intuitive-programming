// S01E02.cpp : Defines the entry point for the application.
//

#include "S01E02.h"


int read_number(std::istream& stream)
{
	int number;
	stream >> number;
	return number;
}

char read_character(std::istream& stream)
{
	char ch;
	stream >> ch;
	return ch;
}

int add(int a, int b)
{
	return a + b;
}

void print(int number)
{
	std::cout << number << std::endl;
}


int main()
{
	std::istream &stream = std::cin;
	int a = read_number(stream);
	char operation = read_character(stream);
	int b = read_number(stream);

	int result = add(a, b);

	print(result);

	return 0;
}
