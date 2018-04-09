#include "input.h"
#include "main.h"

int* input(int *array, int n)
{
	printf("kek");
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{ 
		for (int j = 0; j < n; j++)
		{
			*(array + i*n + j) = rand ()%9 + 0;
		}	
	}
	return array;
}
