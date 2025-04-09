#include <stdio.h>

int main(void)
{
	int number, sum = 0, count = 0;
	float average;
	
	for(;;) // for loop
	{		
		printf("Enter the number : ");
		scanf("%d", &number);
		
		if(number == -1) // escape condition
			break;
		
		sum += number;
		count++;
	}
	
	average = (float)sum / (float)count;
	printf("Average : %f", average);
	return 0;
}
