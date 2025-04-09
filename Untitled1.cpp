#include<stdio.h>

int main()
{
	int num[42] = {0, }, key, i;

    for(i = 0; i < 10; i++)
	{
		scanf("%d", &key);
		num[key % 42] = 1;
	}
	
	int sum = 0;
	
	for(i = 0; i < 42; i++)
		sum += num[i];
	printf("%d", sum);	
	
	return 0;
}
