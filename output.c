#include "output.h"
#include "main.h"

void output(int *array, int n) 
{
	for (int i = 0; i < n; i++) 
    	{
		for (int j = 0; j < n; j++ ) 
        	{
			printf ("\t%d", *(array + i*n + j));
		}
		printf("\n");
	}

} 

