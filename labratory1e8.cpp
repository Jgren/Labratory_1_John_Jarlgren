/*
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int n,i,last;
	char c;

	printf_s("Enter the number you would like to have half a pyramid of: ");
	scanf_s("%i", &n);
	printf_s("Enter the character you would like to have half a pyramid of: ");
	scanf_s(" %c", &c);

	for (i = 0;i < n + 1; i++) {
		for (last = 0;i > last; last++) {
			printf_s("%i", last+1);
		}
		printf_s("\n");
	}
	printf_s("\n");

	for (i = 65;i < (int)c+1; i++) {
		for (last = 65;i >= last; last++) {
			printf_s("%c", (char)i);
		}
		printf_s("\n");
	}

	return 0;
}
*/