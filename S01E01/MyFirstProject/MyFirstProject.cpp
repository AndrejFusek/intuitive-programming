// MyFirstProject.cpp : Defines the entry point for the application.
//

#include "MyFirstProject.h"

#include <stdlib.h>
#include <time.h>

bool generate_random()
{
	return rand() % 2 == 1;
}

std::string convert_to_text(bool will_be)
{
	std::string result;
	if (will_be)
	{
		result = "Bude";
	}
	else
	{
		result = "Nebude";
	}
	result += " z Teba Bjarne Stroustrup.";
	return result;
}

void print(std::string text)
{
	std::cout << text << std::endl;
}

int main()
{
	srand(time(0));

	bool will_be = generate_random();
	std::string text = convert_to_text(will_be);
	print(text);
	
	return 0;
}
