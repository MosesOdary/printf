#include "main.h"

int DecimalToBinary(int number)
{
	const char binChars[] = {"01"};
	char buffer[16] = { 0 };
	uint8_t count = 0;
	int i = 0;

	do {
		int rem = number % 2;

		number /= 2;
		buffer[i++] = binChars[rem];
	} while (number > 0);

	
	while (--i > -1)
	{
		Putchar(buffer[i]);
		count++;
	}
	
	return (count);
}