#include "search.h"
#include "main.h"

int* search_debug(int *array, int n) {
	int min, max , minc, maxc;
	min = *array;
	max = *array;
	
	for (int i = 1; i < n; i++) 
    	{
        	if(*(array + i*n + i) > max)
        	{
            		max = *(array + i*n + i);
            		maxc = i;
        	}
        	if(*(array + i*n + i) <= min)
        	{
            		min = *(array + i*n + i);
            		minc = i;
        	}
	}
	printf("first max value was found at [%d][%d] = %d\n", maxc + 1, maxc + 1, max);
    	printf("last miv value was found at [%d][%d] = %d\n", minc + 1 , minc + 1, min);
    	*(array + maxc*n + maxc) = min;
    	*(array + minc*n + minc) = max;
    	printf("swap\n");
    	return array;
}

int* search_release(int *array, int n) {
  	int min, max , minc, maxc;
        min = *array;
        max = *array;
        
        for (int i = 1; i < n; i++) 
        {
                if(*(array + i*n + i) > max)
                {
                        max = *(array + i*n + i);
                        maxc = i;
                }
                if(*(array + i*n + i) <= min)
                {
                        min = *(array + i*n + i);
                        minc = i;
                }
        }
        *(array + maxc*n + maxc) = min;
        *(array + minc*n + minc) = max;
	return array;
}

