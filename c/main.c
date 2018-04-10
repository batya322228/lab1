#include "main.h"
#include "input.h"
#include "output.h"
#include "search.h"

int main()
{
	int choose;
	const int n = N;
	int *array = (int *)malloc(n * n * sizeof(int));
	array = input(array, n);
    	output(array, n);
    	printf("Press - 1 (Release version)\n Press -2 (Debug version)\n");
    	printf("Enter your choose: ");
    	scanf("%d", &choose);
    	switch(choose)
    	{
       		case 1:
			printf ("\nRelease version : \n");
			array = search_release (array, n);
			break;
		case 2:
			printf ("\nDebug version : \n");
			array = search_debug (array, n);
			break;
		default:
			printf("Error");
    	}
    	output(array, n);
    	return 0;
}
